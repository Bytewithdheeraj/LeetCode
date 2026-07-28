class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        vector<char> str = {'(', '{', '['};

        for(int i = 0; i < n; i++) {

            bool isOpening = false;

            for(int j = 0; j < str.size(); j++) {
                if(s[i] == str[j]) {
                    st.push(s[i]);
                    isOpening = true;
                    break;
                }
            }

            if(!isOpening) {
                if(st.empty())
                    return false;

                if((s[i] == ')' && st.top() == '(') ||
                   (s[i] == '}' && st.top() == '{') ||
                   (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};