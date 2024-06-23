#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string> numberFound;

    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[i][j] != '.'){
                if(!numberFound.insert(to_string(i) + " row " + board[i][j]).second){
                    return false;
                }

                if(!numberFound.insert(to_string(j) + " column " + board[i][j]).second){
                    return false;
                }

                int boxNumber = ((i/3)*3) + (j/3);

                if(!numberFound.insert(to_string(boxNumber) + " box " + board[i][j]).second){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> board = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
    cout <<boolalpha <<isValidSudoku(board) <<endl;
}

// Time Complexity: O(n^2)
// Space Complexity: O(n^2)
