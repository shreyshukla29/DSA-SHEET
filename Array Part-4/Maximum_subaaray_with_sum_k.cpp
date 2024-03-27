

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        // Your code here
         unordered_map<int, int> hashmap; // To store cumulative sum and its index
    int max_len = 0;
    int curr_sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        curr_sum += nums[i];

        // If current sum is 0, update max_len to current index + 1
        if (curr_sum == 0) {
            max_len = i + 1;
        }

        // If current sum is already present in hashmap
        if (hashmap.find(curr_sum) != hashmap.end()) {
            // Update max_len if required
            max_len = max(max_len, i - hashmap[curr_sum]);
        } else {
            hashmap[curr_sum] = i;
        }
    }

    return max_len;
    }
};
