#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    map <char, int> mp;

    for (int i=0; i<s.size(); i++) {
        mp[s[i]]++;
    }

    for (int i=0; i<s.size(); i++) {
        if (mp[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main () {
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)