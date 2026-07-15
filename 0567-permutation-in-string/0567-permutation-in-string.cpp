class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[] ){
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        //store s1 freq:
        for(int i = 0; i < s1.length(); i++){
            int idx = s1[i] - 'a'; //ASCII Value Subtracts
            freq[idx]++;
        }
        int windSize = s1.size();
        for(int i = 0; i < s2.length(); i++){
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};
            while(windIdx < windSize && idx < s2.length()){
                windFreq[s2[idx] - 'a']++;
                windIdx++; idx++;
            }
            if(isFreqSame(freq, windFreq)){ //found
                return true;
            }
        }
        return false;

    }
};