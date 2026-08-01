class Solution {
public:
    int firstUniqChar(string s) {
        queue<char> Q;
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
            Q.push(c);
            while (!Q.empty() && freq[Q.front() - 'a'] > 1) {
                Q.pop();
            }
        }
        if (Q.empty()) return -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == Q.front())
                return i;
        }

        return -1;
    }
};