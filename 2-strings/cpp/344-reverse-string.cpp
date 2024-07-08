#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    for(int i=0; i<s.size()/2; i++){
        swap(s[i], s[s.size()-1-i]);
    }
}

int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);

    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
