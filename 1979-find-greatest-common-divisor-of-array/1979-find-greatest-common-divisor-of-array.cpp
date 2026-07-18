class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(auto x : nums){
            mn = min(mn, x);
            mx = max(mx, x);
        }
        int ans = 1;
        for(int i = 1; i <= mn; i++){
            if(mn % i == 0 && mx % i == 0){
                ans = i;
            }
        }
        return ans;
    }
};