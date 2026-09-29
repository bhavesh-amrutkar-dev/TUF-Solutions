class Solution {
   public:
    string largeOddNum(string& s) {
        // your code goes here
        int i = 0;
        while (i < s.length() && s[i] == '0') {
            i++;
        }
        string str = s.substr(i);
        for (int i = str.length() - 1; i >= 0; i--) {
            if (str[i] % 2 != 0) {
                return str;
            }
            str.pop_back();
        }
        return str;
    }
};