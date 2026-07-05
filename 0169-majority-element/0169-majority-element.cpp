class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for( auto x: nums){
            freq[x]++;
        }
        for(auto [key, val]: freq){
            if(val > n/2) return key;
        }
        return -1;
    }
};