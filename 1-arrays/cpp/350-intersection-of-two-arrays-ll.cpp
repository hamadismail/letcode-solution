#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    map<int, int> nums1Map;
    vector<int> arrayList;

    for(int num: nums1){
        nums1Map[num]++;
    }

    for(int num: nums2){
        auto it = nums1Map.find(num);

        if (it != nums1Map.end() && it->second > 0) {
            arrayList.push_back(num);
            it->second--;
        }
    }
    return arrayList;
}

int main(){
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> result = intersect(nums1, nums2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}
