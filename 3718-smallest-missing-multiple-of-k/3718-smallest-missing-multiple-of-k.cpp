class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;
        int n = nums.size();
        
        for(auto x: nums){
            s.insert(x);
        }

        int curr = k;

        while(s.count(curr)){
            curr += k;
        }

        return curr;
    }
};