class Solution {
   public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> ans;
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        int first=-1, last=-1;
        while (s <= e) {
            if (nums[mid] == target) {
                first = mid;
                e = mid - 1;

            } else if (nums[mid] < target) {
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }

        ans.push_back(first);
        s = 0;
        e = nums.size() - 1;
        mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == target) {
                last = mid;
                s = mid + 1;

            } else if (nums[mid] < target) {
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        ans.push_back(last);
        return ans;
    }
};