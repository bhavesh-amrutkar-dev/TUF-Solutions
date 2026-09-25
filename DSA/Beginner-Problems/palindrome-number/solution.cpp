class Solution {
public:
    bool isPalindrome(int n) {
        int initialVal = n;
        int revNum  = 0;
        n = abs(n);
        while(n>0){
            revNum = (revNum*10) + (n%10);
            n/=10;
        }
        if(initialVal == revNum){
            return true;
        }
        return false;

    }
};