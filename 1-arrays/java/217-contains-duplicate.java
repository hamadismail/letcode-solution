import java.util.HashSet;
public class solution{
    public static boolean containsDuplicate(int[] nums) {
        HashSet<Integer> numbers = new HashSet<>();
        for(int num: nums){
            if(numbers.contains(num)){
                return true;
            }
        numbers.add(num);
        }
        return false;
    }
    public static void main(String args[]){
        int nums[] = {1,2,3,4,1};

        System.out.println(containsDuplicate(nums));
    }
}

// Time Complexity: O(n)
// Space Complexity: O(n)
