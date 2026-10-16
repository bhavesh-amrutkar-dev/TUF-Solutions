class Solution {
   public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void rotateArrayByOne(vector<int>& nums) {
        reverse(nums, 1, nums.size()-1);
        reverse(nums, 0, nums.size()-1);
    }
};