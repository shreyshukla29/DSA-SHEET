#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
set<vector<int> > st;
void f(vector<int>& nums,vector<int>&ans,vector<vector<int>> &sol,unordered_map<int,bool> &mp){
    if( ans.size()== nums.size()){
        if(st.count(ans)) return;
        st.insert(ans);

        sol.push_back(ans);
        return;  
    }

    for(int i =0 ;i<nums.size();i++){
        if(!mp[nums[i]]){
            ans.push_back(nums[i]);
            mp[nums[i]]=true;
            f(nums,ans,sol,mp);
            ans.pop_back();
             mp[nums[i]]=false;
        }
    }

    return;
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>> sol;
        unordered_map<int,bool> mp;
        f(nums,ans,sol,mp);
        return sol;

        
    }
};