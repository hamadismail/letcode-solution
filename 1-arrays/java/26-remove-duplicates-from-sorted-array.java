public class solution{
    public static int removeDuplicates(int[] nums){
        int lastUniqueIndex = 0;

        for(int i=1; i<nums.length; i++){
            if(nums[lastUniqueIndex] != nums[i]){
                nums[lastUniqueIndex+1] = nums[i];
                lastUniqueIndex++;
            }
        }
        return lastUniqueIndex+1;
    }
    public static void main(String args[]){
        int nums[] = {0,0,1,1,1,2,2,3,3,4};
        System.out.println(removeDuplicates(nums));
    }
// Time Complexity: O(n)
// Space Complexity: O(1)
}