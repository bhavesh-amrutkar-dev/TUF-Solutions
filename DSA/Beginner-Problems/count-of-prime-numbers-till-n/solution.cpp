class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) {
            return false;
        }

        int div = n - 1;

        while (div > 1) {
            if (n % div == 0) {
                return false;
            }
            div--;
        }

        return true;
    }
    int primeUptoN(int n) {
        int cnt = 0;
        while(n>0){
            if(isPrime(n)){
                cnt++;
            }
            n--;
        }
        return cnt;

    }
};