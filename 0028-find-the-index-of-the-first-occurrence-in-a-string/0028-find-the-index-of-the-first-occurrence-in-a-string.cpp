class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t position = haystack.find(needle);
        if (position != std::string::npos){
            return (int)position;
        }else return -1;
    }
};