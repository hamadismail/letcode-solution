#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int curDigit = digits.size()-1;

    while(digits[curDigit] == 9){
        if(curDigit == 0){
            digits[0] = 0;
            digits.push_back(0);
        } else{
            digits[curDigit] = 0;
            curDigit--;
        }
    }
    digits[curDigit]++;
    return digits;
}

int main(){
    vector<int> nums = {4,3,2,1};
    vector<int> ans = plusOne(nums);

    for(auto i: ans){
        cout<< i<< " ";
    }
    cout << endl;
}
