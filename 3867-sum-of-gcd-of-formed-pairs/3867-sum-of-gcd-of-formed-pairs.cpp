class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefixGCD(n);

        int maxi = nums[0];

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            prefixGCD[i] = gcd(nums[i], maxi);
        }

        sort(prefixGCD.begin(), prefixGCD.end());

        long long ans = 0;

        int i = 0;
        int j = n - 1;

        while (i < j) {
            ans += gcd(prefixGCD[i], prefixGCD[j]);
            i++;
            j--;
        }

        return ans;
    }
};