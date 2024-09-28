#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
set<vector<int>> st;
void f(vector<int>&nums , int i , vector<int> &ans){
    if(i>=nums.size()){
        //vector<int> res =ans;
       //sort(res.begin(),res.end());
        st.insert(ans);
        return;
    }
    ans.push_back(nums[i]);
    f(nums,i+1,ans);
    ans.pop_back();
    f(nums,i+1,ans);
    return;

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
         sort(nums.begin(),nums.end());
        f(nums,0,ans);
       
        vector<vector<int>> sol (st.begin(),st.end());
        return sol;
        
    }
};