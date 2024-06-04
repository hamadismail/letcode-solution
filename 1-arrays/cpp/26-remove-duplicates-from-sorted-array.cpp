#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int lastIndex = 0;

    for(int i=1; i<nums.size(); i++){
        if(nums[lastIndex] != nums[i]){
            nums[lastIndex + 1] = nums[i];
            lastIndex++;
        }
    }
    return lastIndex+1;

    /* for(int num: nums){
        if(lastIndex<1 || num>nums[lastIndex-1]){
            nums[lastIndex++] = num;
        }
    }
    return lastIndex; */
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<< removeDuplicates(nums)<< endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
