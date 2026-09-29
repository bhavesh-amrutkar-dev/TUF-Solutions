class Solution{	
	public:		
		bool palindromeCheck(string& s){
			string s_init = s;
            int size = s.length();
            int start = 0;
            int end = size-1;
            while(start<end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
            return(s_init == s);
		}
};