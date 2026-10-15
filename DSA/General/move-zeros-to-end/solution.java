class Solution {
    public void moveZeroes(int[] nums) {
        int start = -1 ;
        int n = nums.length;
 
        for(int i = 0 ; i<nums.length ; i++){
            if(nums[i] == 0){
                start = i;
                break;
            }
        }
        if(start == -1) return;
        int end = 0;
        if(start < n -1){
           end = start + 1;
        }else{
            return;
        }
       
       while(end < nums.length){
        if(nums[end] == 0){
end++;
        }else{
            nums[start] = nums[end];
            nums[end] = 0;
            while(start < n -1){
                start ++;
                if(nums[start] == 0) break;
            }
            end = start + 1;
        }
       
       }
      
    }
}
 