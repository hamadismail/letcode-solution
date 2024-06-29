public class Solution{
    public static void rotate(int[][] matrix) {
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<i; j++){
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }

        for (int[] matrix1 : matrix) {
            for (int j = 0; j<matrix[0].length/2; j++) {
                int tmp = matrix1[j];
                matrix1[j] = matrix1[matrix[0].length-j-1];
                matrix1[matrix[0].length-j-1] = tmp;
            }
        }
    }

    public static void main(String args[]){
        int[][] matrix = {{5,1,9,11},
                          {2,4,8,10},
                          {13,3,6,7},
                          {15,14,12,16}};
        rotate(matrix);

        for (int[] matrix1 : matrix) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix1[j] + " ");
            }
            System.out.println();
        }
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
