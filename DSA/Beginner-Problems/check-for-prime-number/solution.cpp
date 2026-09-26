class Solution {
public:
    bool isPrime(int n) {
       if(n<2){
        return false;
       }
        int div = n-1;
        while(div>1){
            if(n%div==0){
                return false;
            }
            div--;
        }
        return true;
    }
};