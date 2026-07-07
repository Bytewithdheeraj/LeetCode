class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        long long sum = 0;
        while(temp>0){
        int remainder = temp%10;
        sum = sum*10 + remainder;
        temp/=10;
        }
        return sum == x;
    }
};