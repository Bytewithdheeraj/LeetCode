class Solution {
public:
    int calculate(string s) {
        long long num = 0, sign = 1, result = 0;
        stack<long long> st;

        for (char x : s) {
            if (isdigit(x)) {
                num = num * 10 + (x - '0');
            }
            else if (x == '+') {
                result += num * sign;
                num = 0;
                sign = 1;
            }
            else if (x == '-') {
                result += num * sign;
                num = 0;
                sign = -1;
            }
            else if (x == '(') {
                st.push(result);
                st.push(sign);

                result = 0;
                sign = 1;
            }
            else if (x == ')') {
                result += num * sign;
                num = 0;

                long long prevSign = st.top();
                st.pop();

                long long prevResult = st.top();
                st.pop();

                result = prevResult + prevSign * result;
            }
        }

        result += sign * num;
        return result;
    }
};