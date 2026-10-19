class Solution{
public:
    int lowerBound(vector<int> &nums, int x){

        int e = nums.size() -1 ;
        int s = 0;
        int mid = s + (e-s)/2;
        while(s<=e){
            if((nums[mid] >= x) && ((nums[mid-1] < x) || mid == 0)){
                return mid;
            }
            if(nums[mid]<x){
                s = mid+1;
            }
            if(nums[mid]>= x){
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return nums.size();

        
    }
};