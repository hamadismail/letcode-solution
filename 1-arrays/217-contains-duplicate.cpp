#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(int num: nums){
        if(!s.insert(num).second)
            return true;
        /* if(s.find(num) != s.end()){
            return true;
        }
        s.insert(num); */
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,4,1};
    cout <<boolalpha <<containsDuplicate(nums) <<endl;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
