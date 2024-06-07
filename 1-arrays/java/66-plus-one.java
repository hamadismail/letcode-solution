import java.util.Arrays;
public class Solution{
    public static int[] plusOne(int[] digits) {
        int curDigit = digits.length-1;

        while(digits[curDigit] == 9){
            if(curDigit == 0){
                int[] newArray = new int[digits.length+1];
                newArray[0] = 1;
                return newArray;
            }
            digits[curDigit] = 0;
            curDigit--;
        }
        digits[curDigit]++;
        return digits;
    }
    public static void main(String args[]){
        int nums[] = {4,3,2,9};
        System.out.println(Arrays.toString(plusOne(nums)));
    }
}
// Time Complexity: O(n)
// Space Complexity: O(n)