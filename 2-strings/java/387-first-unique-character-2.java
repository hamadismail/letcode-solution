import java.util.Hashtable;
public class Solution{
    public static int firstUniqChar(String s) {
        Hashtable<Character, Integer> map = new Hashtable<>();

        for (int i=0; i<s.length(); i++) {
            if (!map.containsKey(s.charAt(i))) {
                map.put(s.charAt(i), 1);
            } 
            else {
                map.put(s.charAt(i), map.get(s.charAt(i))+1);
            }
        }

        for (int i=0; i<s.length(); i++) {
            if (map.get(s.charAt(i)) == 1) {
                return i;
            }
        }

        return -1;
    }

    public static void main(String args[]){
        String s = "loveleetcode";
        System.out.println(firstUniqChar(s));
    }
}

// Time Complexity: O(n)
// Space Complexity: O(n)
