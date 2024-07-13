#include <iostream>
using namespace std;

int reverse(int x) {
    long long result = 0;

    while (x != 0) {
        int reminder = x%10;
        int temp = (result*10) + reminder;
        if ((temp - reminder) / 10 != result) {
            return 0;
        }

        x /= 10;
        result = temp;
    }
    return result;
}
int main() {
    int x = 1534236469;
    cout << reverse(x) << endl;
    
    return 0;
}

// Time Complexity: O(log(n))
// Space Complexity: O(1)
