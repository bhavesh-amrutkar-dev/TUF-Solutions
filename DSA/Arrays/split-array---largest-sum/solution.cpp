class Solution {
   public:
    bool isPossibleSol(vector<int>& nums, int m, int mid) {
        int pageSum = 0;
        int stdcnt = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (pageSum + nums[i] <= mid) {
                pageSum += nums[i];
            } else {
                stdcnt++;
                if (stdcnt > m || nums[i] > mid) {
                    return false;
                }
                pageSum = nums[i];
            }
        }
        return true;
    }
    int largestSubarraySumMinimized(vector<int>& a, int k) {
        int s = 1;
        int sum = 0;
        if (k > a.size()) {
            return -1;
        }
        for (int i = 0; i < a.size(); i++) {
            sum += a[i];
        }
        if (!sum) {
            return 0;
        }
        int e = sum;
        int ans = -1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (isPossibleSol(a, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};