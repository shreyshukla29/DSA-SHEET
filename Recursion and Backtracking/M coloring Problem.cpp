#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

bool issafe(bool graph[101][101],int m ,int n,int color[] ,int v ,int c){
    
    for(int i=0 ;i<n ;i++){
        if(graph[v][i] and c == color[i]) return false;
    }
    return true;
}

bool graphColor(bool graph[101][101],int m ,int n,int color[],int v){
    
    if(v == n) return true;
    
    
    for(int c =1 ;c<= m ;c++){
        
        if(issafe(graph,m,n,color,v,c)){
            color[v]=c;
            
            if(graphColor(graph,m,n,color,v+1)) return true;
        }
    }
    
    return false;
    
}
 
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int color[n];
    for (int i = 0; i < n; i++)
        color[i] = 0;
 
    if (graphColor(graph, m,n, color, 0) == false) {
       
        return false;
    }
 
  
    return true;
        
    }
};