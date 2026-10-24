class Solution {
   public:
    int upperBound(vector<int> &nums, int x) {
        int e = nums.size() - 1;
        int s = 0;
        int mid = s + (e - s) / 2;
        int ans = nums.size();
        while (s <= e) {
            if (nums[mid] > x && (nums[mid - 1] <= x || mid == s)) {
                ans = mid;
                break;
            } else if (nums[mid] <= x) {
                s = mid + 1;
            } else if (nums[mid] >= x) {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};