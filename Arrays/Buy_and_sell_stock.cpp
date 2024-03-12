#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum_price=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            maxprofit=max(maxprofit,prices[i]-minimum_price);
            minimum_price=min(minimum_price,prices[i]);
    } return maxprofit;
    }
};