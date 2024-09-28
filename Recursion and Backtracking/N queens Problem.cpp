#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string> > sols; // 2D vector of strings to store the solutions
    vector<vector<string>> solveNQueens(int n) {    
	    vector<string> board(n, string(n, '.'));  // creating an empty board
	    solve(board, 0); // calling the recursive function
	    return sols; 
    }
    bool isSafe(vector<string>& board, int row, int col) {
	    int n = board.size();
	    for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
            if(row-i>=0 and col-i>=0 and board[row-i][col-i]=='Q') return false;
            if(row-i>=0 and col+i>=0 and board[row-i][col+i]=='Q') return false;
        }
	    return true;
    }
    // Recursive Function (solve) - It basically tries all possible placement of queen for the current row & recurses for it's next row
    void solve(vector<string>& board, int row) {
	// Base condition. 
    // We reached the last row, so we have a solution so we add it to the solution vector
	    if(row == board.size()) { 
		    sols.push_back(board);
		    return;
    	}            
	    // Try placing a queen on each column for a given row. 
        // Explore next row by placing Q at each valid column for the current row
	    for(int col = 0; col < board.size(); col++){
		    if(isSafe(board, row, col)) {
			    board[row][col] = 'Q';    // Queen placed on a valid cell
			    solve(board, row + 1);    // Exploring next row
			    board[row][col] = '.';    // Backtracking to get all possible solutions
		    }
        }
    }
};