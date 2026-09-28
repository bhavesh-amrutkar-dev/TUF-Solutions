class Solution {
public:
    int GCD(int n1,int n2) {
        int minimum = min(n1, n2);
        int ans = 1;
        int i =1;
        while(i<=minimum ){
            if(n1 % i ==0 && n2 % i ==0){
                ans = i;
            }
            i++;
        }
        return ans;

    }
};