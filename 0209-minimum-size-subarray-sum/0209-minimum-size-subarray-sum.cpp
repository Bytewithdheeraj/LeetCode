class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlen = INT_MAX;
        int currSum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            currSum += nums[right];
            while (currSum >= target) {
                minlen = min(minlen, right - left + 1);
                currSum -= nums[left];
                left++;
            }
        }

        return minlen == INT_MAX ? 0 : minlen;
    }
};
