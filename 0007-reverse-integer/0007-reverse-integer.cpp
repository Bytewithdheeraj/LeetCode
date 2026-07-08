class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long long reversedNum = 0;
        while(temp){
            int digits = temp%10;
            reversedNum = reversedNum*10 + digits;
            if (reversedNum > INT_MAX || reversedNum < INT_MIN)
                return 0;
            temp/=10;
        }
        return (int)reversedNum;
    }
};