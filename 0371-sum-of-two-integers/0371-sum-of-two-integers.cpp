class Solution {
public:
    int getSum(int a, int b) {
        if(b != 0){
            a = getSum(a^b, (a&b)<<1);
        }
        return a;
    }
};