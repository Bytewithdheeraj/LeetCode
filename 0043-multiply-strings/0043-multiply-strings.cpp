class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";

        int m = num1.length();
        int n = num2.length();

        vector<int> result(m + n, 0);

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                int x = num1[i] - '0';
                int y = num2[j] - '0';

                int mul = x * y;

                int posLow = i + j + 1;
                int posHigh = i + j;

                int sum = mul + result[posLow];

                result[posLow] = sum % 10;
                result[posHigh] += sum / 10;
            }
        }

        string ans = "";

        for (int num : result) {
            if (!(ans.empty() && num == 0))
                ans += (num + '0');
        }

        return ans.empty() ? "0" : ans;
    }
};