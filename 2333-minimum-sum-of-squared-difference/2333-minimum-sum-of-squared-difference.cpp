class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<long long> bucket(100001, 0);
        long long total_k = (long long)k1 + k2;
        
        for (int i = 0; i < n; ++i) {
            bucket[abs(nums1[i] - nums2[i])]++;
        }
        
        for (int diff = 100000; diff > 0; --diff) {
            if (bucket[diff] == 0) continue;
            
            if (total_k >= bucket[diff]) {
                total_k -= bucket[diff];
                bucket[diff - 1] += bucket[diff];
                bucket[diff] = 0;
            } 
            else {
                bucket[diff - 1] += total_k;
                bucket[diff] -= total_k;
                total_k = 0;
                break;
            }
        }
        
        long long min_sum_squares = 0;
        for (long long diff = 1; diff <= 100000; ++diff) {
            if (bucket[diff] > 0) {
                min_sum_squares += bucket[diff] * (diff * diff);
            }
        }
        
        return min_sum_squares;
    }
};
