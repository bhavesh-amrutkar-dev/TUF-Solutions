class Solution {
public:
    bool isPerfect(int n) {
        int initialVal = n;
        int divisor = n-1;
        int calVal = 0;
        while(divisor > 0){
            if(initialVal % divisor == 0){
                calVal += divisor;
            }
            divisor--;
        }
        return (initialVal == calVal);
    }
};