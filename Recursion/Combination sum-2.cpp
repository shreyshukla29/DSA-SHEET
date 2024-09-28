
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<vector<int>> sols;
void f(int start ,int k , vector<int> &candidate,vector<int> &ans){
    if(k==0){
        sols.push_back(ans);
        return;

    }
    if(start==candidate.size()) return ;
    for(int i =start ;i<candidate.size();i++){
        if(k>=candidate[i]){
            ans.push_back(candidate[i]);
      
            f(i+1,k-candidate[i],candidate,ans);
            while(i+1<candidate.size() &&candidate[i] ==candidate[i+1]){
                i++;

            }
            ans.pop_back();
        }
    }
    return;
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<int> ans;
         sort(candidates.begin(),candidates.end());
        f(0,target,candidates,ans);
        return sols;
    }
};