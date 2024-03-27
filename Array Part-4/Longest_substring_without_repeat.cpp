
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      unordered_map<char,int> freq;
      int start=0;
      int length=0;
      int maxlen=0;

      for(int i=0;i<s.size();++i){
        while(freq[s[i]]>0){
         freq[s[start]]--;  // Adjust frequency before incrementing start
         start++;
          maxlen=max(length,maxlen);
          length--;
        }
          freq[s[i]]++;
          length++;
        
      } maxlen = max(length, maxlen);
      return maxlen;

        
    }
};