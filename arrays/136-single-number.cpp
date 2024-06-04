#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    // (x^1)^1 = x
    int ans = 0;
    for(int num: nums){
        ans ^= num;
    }
    return ans;
}

int main(){
    vector<int> num = {4,1,2,1,2};
    cout<< singleNumber(num)<< endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
