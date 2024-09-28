#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<vector<int>> sols;
void f(vector<int> & candidates,int start,int k,vector<int> &ans){
    if(k==0) {

    sols.push_back(ans);
    return ;}
    if(start==candidates.size()) return ;
    for(int i=start;i<candidates.size();i++){
        if(k>=candidates[i]){
            ans.push_back(candidates[i]);
            f(candidates,i,k-candidates[i],ans);
            ans.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        f(candidates,0,target,ans);
        return sols;
    }
};