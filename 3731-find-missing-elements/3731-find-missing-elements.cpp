class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> m;
        vector<int> ans;

        int maxEle = INT_MIN;
        int minEle = INT_MAX;

        for(int x : nums){
            m[x]++;
            maxEle = max(maxEle, x);
            minEle = min(minEle, x);
        }
        for(int i = minEle; i <= maxEle; i++){
            if(!m.count(i)){
                ans.push_back(i);
            }
        }
        return ans;

    }
};