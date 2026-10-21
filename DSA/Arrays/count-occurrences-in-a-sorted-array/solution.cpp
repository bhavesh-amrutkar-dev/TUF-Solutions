class Solution {
   public:
    int countOccurrences(vector<int>& arr, int target) {
        // Your code goes here
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        int first = -1, last = -1;
        while (s <= e) {
            if (arr[mid] == target) {
                first = mid;
                e = mid - 1;

            } else if (arr[mid] < target) {
                s = mid + 1;
            } else if (arr[mid] > target) {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }

        s = 0;
        e = arr.size() - 1;
        mid = s + (e - s) / 2;
        while (s <= e) {
            if (arr[mid] == target) {
                last = mid;
                s = mid + 1;

            } else if (arr[mid] < target) {
                s = mid + 1;
            } else if (arr[mid] > target) {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        int ans = last - first;
        if (last == -1 || first == -1) {
            ans = 0;
        } else {
            ans += 1;
        }

        return ans;
    }
};