
# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele;
        for(int x:nums){
            if (cnt==0) ele=x;
            cnt+= (x== ele)?1:-1;
        }
        return ele;
    }
};