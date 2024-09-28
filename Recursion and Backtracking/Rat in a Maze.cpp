#include <bits/stdc++.h>
using namespace std;
// User function template for C++

class Solution{
    public:
    vector<string>sol;
    
    
    void f(vector<vector<int>> &m , int n, int i, int j, string s){
        
        if( i <0 or j <0 or  i >= m.size() or j>=m[0].size() or m[i][j]==0){
            return ;
        }
        
        if(i == n-1 and j== n-1) {
            
            sol.push_back(s);
        }
        
        m[i][j]=0;
        f(m,n,i+1,j,s+'D');
        f(m,n,i-1,j,s+'U');
        f(m,n,i,j+1,s+'R');
        f(m,n,i,j-1,s+'L');
        
        m[i][j]=1;
        return ;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string s ="";
        // Your code goes here
        f(m,n,0,0,s);
        
        return sol;
        
       
    }
};

    