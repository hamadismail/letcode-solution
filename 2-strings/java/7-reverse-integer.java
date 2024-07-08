public class Solution{
    public static int reverse(int x) {
        int result = 0;

        while(x != 0) {
            int reminder = x % 10;
            int temp = (result * 10) + reminder;

            if((temp-reminder) / 10 != result){
                return 0;
            }

            x /= 10;
            result = temp;
        }
        return result;
    }

    public static void main(String args[]){
        int x = 123;
        System.out.println(reverse(x));
    }
}

// Time Complexity: O(log(n))
// Space Complexity: O(1)
