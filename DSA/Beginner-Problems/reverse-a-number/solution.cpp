class Solution {
public:
    int reverseNumber(int n) {
        int revNum = 0;
        n = abs(n);
        while(n >0){
            revNum = (revNum * 10) + (n%10);
            n /= 10;
        }
        return revNum;

    }
};