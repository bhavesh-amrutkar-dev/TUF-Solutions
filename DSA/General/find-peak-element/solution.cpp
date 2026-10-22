class Solution {
   public:
    int findPeakElement(vector<int> &arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        int ans;
        if (arr.size() == 1) {
            return arr.size() - 1;
        }
        if (arr.size() == 2) {
            if (arr[start] >= arr[end]) {
                return start;
            } else {
                return end;
            }
        }
        while (start < end) {
            if (mid == end || mid == start) {
                if (arr[start] >= arr[end]) {
                    ans = start;
                    break;
                } else {
                    ans = end;
                    break;
                }
            } else if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                ans = mid;
                break;
            } else if (arr[mid] < arr[mid + 1]) {
                start = mid;
            } else if (arr[mid] > arr[mid + 1]) {
                end = mid;
            }

            mid = start + (end - start) / 2;
        
    }
    return ans;
}
};