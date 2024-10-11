#include<bits/stdc++.h>
using namespace std;

class Solution {
public:


    int singleNonDuplicate(vector<int>& nums) {
      int low = 0;
    int high = nums.size() - 1;
    
    if (nums.size() == 1) return nums[0];

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((mid == 0 || nums[mid] != nums[mid - 1]) && (mid == nums.size() - 1 || nums[mid] != nums[mid + 1])) {
            return nums[mid];
        }
        
        // If mid is even and nums[mid] is equal to nums[mid + 1], the single element is on the right
        if (mid % 2 == 0) {
            if (mid + 1 < nums.size() && nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid - 1;
            }
        } else {
            // If mid is odd and nums[mid] is equal to nums[mid - 1], the single element is on the right
            if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;
        
    }
};