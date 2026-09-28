class Solution {
public:
    int LCM(int n1,int n2) {
        int maximum = max(n1, n2);
        int minimum = min(n1, n2);
        int i =1;
        int check = 1;
        while(true){
            check = maximum*i;
            if(check%minimum == 0){
                return check;
                
            }
            i++;
        }

    }
};