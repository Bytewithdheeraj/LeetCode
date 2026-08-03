class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        double windowSum = 0;

        for(int i = 0; i < k; i++){
            windowSum += nums[i];
        }
        double maxSum = windowSum;

        for(int j = k; j < n; j++){
            windowSum += nums[j];
            windowSum -= nums[j-k];
            
            maxSum = max(maxSum, windowSum);
        }
        return (double)maxSum / k;
    }
};