class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {

        int mx = 0;

        // Find maximum number
        for (int x : nums)
            mx = max(mx, x);

        vector<int> freq(mx + 1, 0);
        vector<long long> prefix(mx + 1, 0);

        // Store frequency of each number
        for (int x : nums)
            freq[x]++;

        // Find pairs having GCD = i
        for (int i = mx; i >= 1; i--) {

            long long cnt = 0;

            // Count numbers divisible by i
            for (int j = i; j <= mx; j += i)
                cnt += freq[j];

            // Total possible pairs
            long long pairs = cnt * (cnt - 1) / 2;

            // Remove pairs counted for bigger GCDs
            for (int j = i * 2; j <= mx; j += i)
                pairs -= prefix[j];

            // Exact pairs with GCD = i
            prefix[i] = pairs;
        }

        // Make prefix sum for binary search
        for (int i = 1; i <= mx; i++)
            prefix[i] += prefix[i - 1];

        vector<int> ans;

        // Answer each query
        for (long long q : queries) {

            q++; // Convert to 1-based index

            int low = 1, high = mx;

            // Binary search
            while (low < high) {

                int mid = low + (high - low) / 2;

                if (prefix[mid] >= q)
                    high = mid;
                else
                    low = mid + 1;
            }

            ans.push_back(low);
        }

        return ans;
    }
};