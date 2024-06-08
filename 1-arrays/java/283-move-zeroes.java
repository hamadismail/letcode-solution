import java.util.Arrays;

public class Solution{
    public static int[] plusOne(int[] nums) {
        int l=0, r=1;
        if(nums.length < 2) return nums;

        while(r<nums.length){
            if(nums[l] != 0){
                l++;
                r++;
            }
            else if(nums[r] == 0) r++;
            else{
                int tmp = nums[l];
                nums[l] =  nums[r];
                nums[r] = tmp;
            }
    }
    return nums;
    }

    public static void main(String args[]){
        int nums[] = {1,3,0,1,0,0,0,4};
        System.out.println(Arrays.toString(plusOne(nums)));
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)
