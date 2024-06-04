#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&, int, int);
void rotate(vector<int>&, int);

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();

    reverse(nums, 0, nums.size()-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, nums.size()-1);
}

void reverse(vector<int>& nums, int start, int end){
    while(start < end){
        swap(nums[start++], nums[end--]);

        /* int tmp = nums[start];
        nums[start] = nums[end];
        nums[end] = tmp;
        start++;
        end--; */
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    vector<int> ans;
    rotate(nums, 3);

    for(int num: nums){
        cout<< num <<" ";
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
