class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        if (nums.empty()) return {};

        int n = nums.size();
        int count = 1;
        vector<int> ans;

        ans.push_back(nums[0]);

        for (int i = 1; i < n; i++) {

            if (nums[i] == nums[i - 1])
                count++;
            else
                count = 1;

            if (count <= k)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};