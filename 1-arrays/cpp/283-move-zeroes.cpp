#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) {
    int l=0, r=1;
    if(nums.size() < 2) return nums;

    while(r<nums.size()){
        if(nums[l] != 0) l++, r++;
        else if(nums[r] == 0) r++;
        else{
            swap(nums[l], nums[r]);
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {1,3,0,1,0,0,0,4};
    vector<int> ans = moveZeroes(nums);

    for(auto i: ans) cout<< i<< " ";
    cout<< endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
