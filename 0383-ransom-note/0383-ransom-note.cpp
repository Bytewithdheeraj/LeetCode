class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for (char x : ransomNote) {
            mp[x]++;
        }

        for (char x : magazine) {
            if (mp.count(x)) {
                mp[x]--;
                if (mp[x] == 0) {
                    mp.erase(x);
                }
            }
        }

        return mp.empty();
    }
};