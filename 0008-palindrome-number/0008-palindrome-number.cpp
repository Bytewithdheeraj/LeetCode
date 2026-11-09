class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long sum = 0;
        if(x < 0) return false;
        while(temp != 0){
            int digit = temp%10;
            sum = sum*10 + digit;
            temp /= 10;
        }
        return sum == x;
    }
};