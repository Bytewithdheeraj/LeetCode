class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (tickets[i] < tickets[k]) {
                sum += tickets[i];
            }
            else if (tickets[i] >= tickets[k] && i > k) {
                sum += tickets[k] - 1;
            }
            else {
                sum += tickets[k];
            }
        }

        return sum;
    }
};