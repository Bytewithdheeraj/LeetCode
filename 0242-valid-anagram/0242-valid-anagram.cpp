class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        for (char c : t) {
            if (!freq.count(c))
                return false;
            freq[c]--;
        }

        for (const auto& pair : freq) {
            if (pair.second != 0)
                return false;
        }

        return true;
    }
};