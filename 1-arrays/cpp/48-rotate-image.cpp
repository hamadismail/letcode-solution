#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>&matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (auto &row : matrix) {
        for (int j = 0; j<matrix[0].size()/2; j++) {
            swap(row[j], row[matrix[0].size()-j-1]);
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{5,1,9,11},
                    {2,4,8,10},
                    {13,3,6,7},
                    {15,14,12,16}};
    rotate(matrix);
    for (auto row : matrix) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << row[j] << " ";
        }
        cout << endl;
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)