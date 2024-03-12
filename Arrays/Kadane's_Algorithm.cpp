#include<bits/stdc++.h>
using namespace std;

/*
kadanes Algo*/
class Solution {
public:
   

    int maxSubArray(vector<int>& nums) {
       int maxsum = nums[0]; // Initialize maxsum with the first element
        int current_sum = nums[0]; // Initialize current sum with the first element

        for (int i = 1; i < nums.size(); ++i) {
            // Either extend the current subarray or start a new one
            current_sum = max(nums[i], current_sum + nums[i]);
            // Update maxsum if needed
            maxsum = max(maxsum, current_sum);
        }

        return maxsum;
    }
};


