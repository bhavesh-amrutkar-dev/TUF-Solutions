class Solution {
    public void moveZeroes(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int index = -1;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                index++;
                map.put(index ,nums[i] );
                nums[i] = 0;
            }
        }
        if(index == -1) return;
        for(Map.Entry<Integer , Integer> entity : map.entrySet()){
            nums[entity.getKey()] = entity.getValue();
        }
        return;
    }
}
 