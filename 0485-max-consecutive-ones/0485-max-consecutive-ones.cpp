class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countOnes = 0;
        int maxOnes = 0;

        for (int x : nums) {
            if (x == 1) {
                countOnes++;
                maxOnes = max(maxOnes, countOnes);
            } else {
                countOnes = 0;
            }
        }

        return maxOnes;
    }
};