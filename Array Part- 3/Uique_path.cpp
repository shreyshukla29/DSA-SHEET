
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int n;  
int m;
vector<vector<int>> dp;
int f(int i,int j){
     if(i<0 ||i>=n || j<0 ||j>=m) return 0;
    
     if(dp[i][j]!=-1) return dp[i][j];
    if(i==n-1 and j==m-1 ) return 1; 
    return dp[i][j]=f(i,j+1)+f(i+1,j);
}
    int uniquePaths(int m, int n) {
      this->m=m;
      this->n=n;
      dp.resize(105,vector<int> (105,-1));
     return f(0,0);
        
    }
};