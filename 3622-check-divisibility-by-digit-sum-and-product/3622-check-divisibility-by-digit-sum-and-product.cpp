class Solution {
public:
    bool checkDivisibility(int n) {
        int product = 1, sum = 0, temp = n;
        while(temp > 0){
            int digit = temp%10;
            product *= digit;
            sum += digit;
            temp/=10;
        }
        return n%(product + sum)==0;
    }
};