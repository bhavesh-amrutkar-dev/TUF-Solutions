class Solution {
public:
    bool isOdd(int n)
    {
        if(n%2 != 0){
            return true;
        }
        return false;
    }
    int countOddDigit(int n) {
        int count = 0;
        n = abs(n);
        while(n>0){
            if(isOdd(n%10)){
                count++;
            }
            n/=10;
        }
        return count;
    }
};