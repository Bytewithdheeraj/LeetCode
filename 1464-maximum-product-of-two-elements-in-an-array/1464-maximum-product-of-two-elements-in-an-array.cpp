class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;
        for(int x : nums){
            pq.push(x);
        }
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        return (a - 1) * (b - 1);
    }
};