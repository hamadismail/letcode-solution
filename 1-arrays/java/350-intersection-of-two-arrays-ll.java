import java.util.ArrayList;
import java.util.Arrays;
import java.util.Hashtable;
public class Solution{
    public static int[] intersect(int[] nums1, int[] nums2) {
        Hashtable<Integer, Integer> nums1Map = new Hashtable<>();
        ArrayList<Integer> intersectionAL = new ArrayList<>();

        for(int i=0; i<nums1.length; i++){
            if(nums1Map.containsKey(nums1[i])){
                nums1Map.put(nums1[i], nums1Map.get(nums1[i])+1);
            }
            else {
                nums1Map.put(nums1[i], i);
            }
        }

        for(int i=0; i<nums2.length; i++){
            if(nums1Map.containsKey(nums2[i])){
                intersectionAL.add(nums2[i]);
                nums1Map.put(nums2[i], nums1Map.get(nums2[i]) - 1);
                
                if(nums1Map.get(nums2[i]) == 0){
                    nums1Map.remove(nums2[i]);
                }
            }
        }
        int[] result = new int[intersectionAL.size()];

        for(int i=0; i<result.length; i++){
            result[i] = intersectionAL.get(i);
        }

        return result;
    }
    public static void main(String args[]){
        int nums1[] = {1,2,2,1};
        int nums2[] = {2,2};
        System.out.println(Arrays.toString(intersect(nums1, nums2)));
    }
}
// Time Complexity: O(n)
// Space Complexity: O(n)