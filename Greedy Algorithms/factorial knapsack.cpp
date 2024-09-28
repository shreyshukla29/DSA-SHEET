

#include<bits/stdc++.h>
using namespace std;
 
struct Item{
    int value;
    int weight;
};



struct Item{
    int value;
    int weight;
};



class Solution
{
    public:
    static bool compare(Item &a ,Item &b){
        return (double)a.value/a.weight > (double) b.value/b.weight ;
        
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        int totalweight =0;
        double valuecart=0;
        sort(arr,arr+n ,compare);
        for(int i=0 ;i<n;i++){
            if(arr[i].weight + totalweight <= W ){
                totalweight+=arr[i].weight;
                valuecart+=arr[i].value;
            }else if(totalweight < W){
                int x = W-totalweight;
                double frac = (double)x / (double)arr[i].weight;
                valuecart+=frac *arr[i].value;
                break;
            }
        }
        return valuecart;
    }
        
};