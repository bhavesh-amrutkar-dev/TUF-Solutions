class Solution {
public:
    int factorial(int n) {
        long long value = n;
        long long ans = 1;
        while(value>0){
            ans*=value;
            value--;
        }
        return ans;

    }
};
