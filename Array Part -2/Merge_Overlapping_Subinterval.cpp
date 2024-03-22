
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool static compare(vector<int> &a ,vector<int> &b){
  if(a[0]==b[0]){
    return a[1]<b[1];
  }
  return a[0]<b[0];
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end(),compare);
      int start = intervals[0][0];
      int end = intervals[0][1];
      vector<vector<int> > ans;
      

      for(auto x: intervals){
        if( end >= x[0] ){
          if( end < x[1]){
            end = x[1];
          }
        }else{
          
          ans.push_back({start,end});
          start =x[0];
          end=x[1];

        }
        
        
      }
      ans.push_back({start,end});
      return ans;
        
    }
};