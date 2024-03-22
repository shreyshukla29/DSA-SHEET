#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     void sortColors(vector<int>& a) {
//         int n=a.size();
//          for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++) { if(a[i]>a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     }
// };
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        // int low = 0, mid = 0, high = nums.size()-1;
        // while(mid <= high){
        //     if(nums[mid] == 0){
        //         swap(nums[low], nums[mid]);
        //         low++;
        //         mid++;
        //     }
        //     else if(nums[mid] == 1){
        //         mid++;
        //     }
        //     else{
        //         swap(nums[mid], nums[high]);
        //         high--;
        //     }
        // }
        
//     }
// };


class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
    }
};