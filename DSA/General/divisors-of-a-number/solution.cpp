class Solution {
   public:
    vector<int> divisors(int n) {
        vector<int> ans;
        int i = 1;
        while (i <= n) {
            if (n % i == 0) {
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};