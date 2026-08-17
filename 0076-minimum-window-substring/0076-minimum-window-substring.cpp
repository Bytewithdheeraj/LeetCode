class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        unordered_map<char, int> window;

        int l = 0, minWin = INT_MAX;
        int have = 0;
        int st = 0;

        for(char c : t){
            mp[c]++;
        }

        int req = mp.size();

        for(int r = 0; r < s.length(); r++){

            window[s[r]]++;

            if(mp.count(s[r]) && window[s[r]] == mp[s[r]]){
                have++;
            }

            while(have == req){

                if(r - l + 1 < minWin){
                    minWin = r - l + 1;
                    st = l;
                }

                if(mp.count(s[l]) && window[s[l]] == mp[s[l]]){
                    have--;
                }

                window[s[l]]--;
                l++;
            }
        }

        if(minWin == INT_MAX){
            return "";
        }

        return s.substr(st, minWin);
    }
};