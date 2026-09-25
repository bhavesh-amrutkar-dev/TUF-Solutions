class Solution {
   public:
    int largestDigit(int n) {
        long long value = n;

        if (value < 0) {
            value = -value;
        }

        int answer = 0;

        while (value > 0) {
            answer = max(answer, (int)(value % 10));
            value /= 10;
        }

        return answer;
    }
};