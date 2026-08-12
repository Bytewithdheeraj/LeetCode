class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp; //element, freq

        int left = 0;
        int maxLen = INT_MIN;

        for(int right = 0; right < n; right++){
            mp[nums[right]]++;

            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};