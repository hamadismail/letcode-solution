# LeetCode Solutions in C++ and Java

Master Coding Interviews: LeetCode Solutions in C++ and Java

## Running the Code

**C++:**

1. **Local Execution:**
    * Compile the C++ solution using a C++ compiler (e.g., `g++ solution.cpp -o solution`).
    * Run the compiled executable (e.g., `./solution`).

2. **LeetCode Submission:**
    * **Important:** LeetCode typically removes the `main` method before evaluating your code.
    * **To submit your code:**
        * **Remove the `int main(){ ... }` block** from your solution file.
        * **Place your solution function (e.g., `removeDuplicates`) inside a class named `Solution` with a public member function of the same name.** This function will be called by LeetCode with the provided input.

**Example:**

Here's the modified `26-remove-duplicates-from-sorted-array` program integrated into a `Solution` class, ready for LeetCode submission:

```c++
class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int lastIndex = 0;

    for (int i = 1; i < nums.size(); i++) {
      if (nums[lastIndex] != nums[i]) {
        nums[lastIndex + 1] = nums[i];
        lastIndex++;
      }
    }
    return lastIndex + 1;
  }
};
```

**Java:**

1. **Local Execution:**
    * Rename the Java solution file to `Solution.java`.
    * Compile the code using a Java compiler (e.g., `javac Solution.java`).
    * Run the code using the `java` command (e.g., `java Solution`).

2. **LeetCode Submission:**
    * **Important:** LeetCode typically removes the `main` method before evaluating your code.
    * **To submit your code:**
        * **Remove the `public static void main(String args[]) {...}` block** from your solution file. LeetCode will provide the input data for testing.

**Example:**

Here's the provided `26-remove-duplicates-from-sorted-array` program with the `main` method removed for LeetCode submission:

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
```
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

