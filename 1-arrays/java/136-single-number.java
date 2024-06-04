public class Solution{
    public static int singleNumber(int[] nums){
        // (x^1)^1 = x
        int ans = 0;
        for(int num: nums){
            ans ^= num;
        }
        return ans;
    }
    public static void main(String args[]){
        int nums[] = {4,1,2,1,2};
        System.out.println(singleNumber(nums));
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)
