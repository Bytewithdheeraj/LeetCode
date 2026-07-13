class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> result;

        for (int len = 2; len <= s.length(); len++) {
            for (int startIdx = 0; startIdx <= s.length() - len; startIdx++) {
                int num = stoi(s.substr(startIdx, len));

                if (num >= low && num <= high)
                    result.push_back(num);
            }
        }

        return result;
    }
};