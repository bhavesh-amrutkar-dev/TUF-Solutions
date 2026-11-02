class Solution {

    boolean isPossibleSol(int[] C, int A, int B, long mid) {

        long boardSum = 0;
        int pCnt = 1;

        for (int i = 0; i < C.length; i++) {

            long curr = (long) B * C[i];

            if (curr > mid) {
                return false;
            }

            if (boardSum + curr <= mid) {
                boardSum += curr;
            } else {
                pCnt++;

                if (pCnt > A) {
                    return false;
                }

                boardSum = curr;
            }
        }

        return true;
    }

    public int paint(int A, int B, int[] C) {

        long s = 0;
        long sum = 0;

        for (int i = 0; i < C.length; i++) {

            long curr = (long) B * C[i];

            s = Math.max(s, curr);
            sum += curr;
        }

        long e = sum;
        long ans = sum;

        while (s <= e) {

            long mid = s + (e - s) / 2;

            if (isPossibleSol(C, A, B, mid)) {

                ans = mid;
                e = mid - 1;

            } else {

                s = mid + 1;
            }
        }

        return (int) (ans % 10000003);
    }
}