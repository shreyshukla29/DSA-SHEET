#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  void  f(vector<int> arr ,int n , int i,vector<int> &ans,int sum){
      if(i >=n) {
          ans.push_back(sum);
          return;
      }
      
    f(arr,n,i+1,ans,sum+arr[i]);
     
   f(arr,n,i+1,ans,sum);
     
     return ;
  }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        int sum=0;
    f(arr,n,0,ans,sum);
    return ans;
    }
};