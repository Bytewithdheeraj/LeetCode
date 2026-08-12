class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;

        for(int x : nums){
            s.insert(x);
        }

        int ans = 0;

        for(int x : s){
            if(s.count(x-1) == 0) {
                int num = x;
                int count = 1;

                while(s.count(num + 1)){
                    num++;
                    count++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};