# LeetCode Solutions

This repository contains solutions to various LeetCode problems in C++ and Java.

## Running the Code

**C++:**

The C++ solutions can be compiled and run using your preferred C++ compiler. 

**Java:**

1. **Local Execution:**
    * Rename the Java solution file to `solution.java`.
    * Compile the code using a Java compiler (e.g., `javac solution.java`).
    * Run the code using the `java` command (e.g., `java solution`).

2. **LeetCode Submission:**
    * **Important:** LeetCode typically removes the `main` method before evaluating your code.
    * **To submit your code:**
        * **Remove the `public static void main(String args[]) {...}` block** from your solution file. LeetCode will provide the input data for testing.
        * **Ensure your solution function (`removeDuplicates` in this example) works correctly without the `main` method included.**

**Example:**

Here's the provided `removeDuplicates` function with the `main` method removed for LeetCode submission:

```java
public class Solution { // Renamed to Solution (optional)
  public int removeDuplicates(int[] nums) {
    int lastUniqueIndex = 0;

    for (int i = 1; i < nums.length; i++) {
      if (nums[lastUniqueIndex] != nums[i]) {
        nums[lastUniqueIndex + 1] = nums[i];
        lastUniqueIndex++;
      }
    }
    return lastUniqueIndex + 1;
  }
}

## Contributing

Feel free to contribute solutions to new LeetCode problems by following these steps:

1. Create a new folder for the LeetCode problem.
2. Inside the folder, create two files:
    * `solution.cpp` (for C++ solution)
    * `solution.java` (for Java solution)
3. Implement the solution code in the respective files.
4. Add a README.md file to the problem folder if necessary (e.g., for specific instructions).
5. Submit a pull request to add your solution to the repository.

## License

<!-- This repository is licensed under the [MIT License](https://choosealicense.com/licenses/mit/). -->

