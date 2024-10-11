#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge = nums1;
        int n = nums1.size();
        int m =nums2.size();

        for(int i = 0 ;i<m;i++){
            merge.push_back(nums2[i]);
        }

        sort(merge.begin() , merge.end());

        int mergeLen = merge.size();
        cout<<mergeLen<<endl;

        if(mergeLen %2){
            return merge[mergeLen/2];
        }
        

        double median =  merge[mergeLen/2];

        median += merge [(mergeLen-1)/2];
        cout<<"medina"<<median;

        return median/2;        
    }
};