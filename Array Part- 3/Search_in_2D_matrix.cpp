// simple binary search in 2d matrix
# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool searchMatrix(vector<vector<int>>& arr, int target) {
  int row = arr.size();
  int col = arr[0].size();
  int l = 0, h = row * col - 1;
  
  while (l <= h) {
    int mid = l + (h - l) / 2;
 
    int tC = mid % col;
    int tR = mid / col;
    
    if (arr[tR][tC] == target)
      return true;
 
    if (arr[tR][tC] < target)
      l = mid + 1;
    else
      h = mid - 1;
  }
      return false;

        
    }
};