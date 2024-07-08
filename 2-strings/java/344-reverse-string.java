public class Solution{
    public static void reverseString(char[] s) {
        for(int i=0; i<s.length/2; i++){
            char tmp = s[i];
            s[i] = s[s.length-1-i];
            s[s.length-1-i] = tmp;
        }
    }

    public static void main(String args[]){
        char[] s = {'h', 'e','l','l','o'};
        reverseString(s);

        for(int i=0; i<s.length; i++){
            System.out.print(s[i]);
        }
        System.out.println("");
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)
