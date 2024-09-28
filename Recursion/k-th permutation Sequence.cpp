#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
// int count=0;
// string ans="";

// void generatePermutation(int n ,int k,vector<bool> visited, vector<int> &numbers ,string permutation){
//     if(count==k) return;
//    if(permutation.size()==n){
//     count++;
//     cout<<permutation <<" "<<count<<endl;
//     if(count==k) ans=permutation;
//     return;
//    }

//    for (int i = 0; i < numbers.size(); i++) {
//         if (!visited[i]) {
//             visited[i] = true;
//             permutation.push_back('0'+numbers[i]);
//             generatePermutation(n,k, visited,numbers,permutation);
//             permutation.pop_back();
//             visited[i] = false;
//         }
//     }
//     return;
   

// }
    string getPermutation(int n, int k) {
         vector<int> numbers(n);
        for(int i = 0; i < n; ++i) {
            numbers[i] = i + 1;
        }
        
        // Calculate factorials from 0! to (n-1)!
        vector<int> factorials(n);
        factorials[0] = 1;
        for(int i = 1; i < n; ++i) {
            factorials[i] = factorials[i - 1] * i;
        }
        
        // Decrement k to make it zero-indexed
        --k;
        
        string result;
        // Generate the kth permutation
        for(int i = n; i > 0; --i) {
            int index = k / factorials[i - 1];
            k %= factorials[i - 1];
            result += to_string(numbers[index]);
           numbers.erase(numbers.begin() + index);
        }
        cout<<result;
        return result;
    }
};