#include<bits/stdc++.h>
using namespace std;
 /*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

class Solution 
{
    public:
    static bool cmp(Job &a,Job &b){
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int count = 0,profit = 0;
        vector<int>temp(n+1,0);
        sort(arr,arr+n,cmp);
        
        for(int i=0;i<n;i++){
          for(int j=arr[i].dead;j>0;j--){
              if(temp[j] == 0){
                  temp[j] = arr[i].profit;
                  profit += arr[i].profit;
                  count ++;
                  break;
              }
          }
        }
       
        return {count,profit};
    } 
};