#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<vector<string>> sol;
bool checkPalindrome(string &s){
    if(s.size()==0) return false;

    int left =0;
    int right=s.size()-1;

    while(left<=right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;

    }
    return true;
}

void f(string &s, int i, vector<string>ans){
    if(i>=s.size()) {
        sol.push_back(ans);
        return;

    }

    string a="";
    
    for(int j =i ;j<s.size();j++){
        a+=s[j];
       if(checkPalindrome(a)) {
        ans.push_back(a);
        f(s,j+1,ans);
        ans.pop_back();
       }

    }
    return;

}
    vector<vector<string>> partition(string s) {
        if(s.size()==0) return {};

        vector<string> ans;

        f(s,0,ans);
     
        return sol;
    }
};