class Solution {
   public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            if (nums1[i] < nums2[j]) {
                i++;
            }
            if (nums1[i] > nums2[j]) {
                j++;
            }
        }
        return res;
    }
};