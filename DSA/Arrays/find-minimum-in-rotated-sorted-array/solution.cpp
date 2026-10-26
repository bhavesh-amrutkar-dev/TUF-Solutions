class Solution {
   public:
    int findMin(vector<int> &arr) {
        int s = 0, e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        if (arr[0] < arr[e]) {
            return arr[0];
        }
        while (s < e) {
            if (arr[mid] >= arr[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }

        return arr[s];
    }
};