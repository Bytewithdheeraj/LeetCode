class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr = 0;
        int skip = 0;
        int end = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            curr = max(curr, i + nums[i]);
            if(i == end){
                skip++;
                end = curr;
            }
        }
        if(end >= n - 1){
            return true;
        }
        return false;
    }
};