#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    for(int i=0; i<prices.size()-1; i++){
        if(prices[i+1] > prices[i]){
            maxProfit += prices[i+1] - prices[i];
        }
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<< maxProfit(prices)<< endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
