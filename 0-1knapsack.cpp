#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int solve(int W, int wt[], int val[], int n,vector<vector<int>> &dp){
        if(n==0 || W==0){
           return 0;
       }
       
       if(dp[n][W]!=-1)
       return dp[n][W];
       
       if(wt[n-1]<=W){
           return dp[n][W] = max(val[n-1]+solve(W-wt[n-1],wt,val,n-1,dp),solve(W,wt,val,n-1,dp));
       }else{
           return dp[n][W] = solve(W,wt,val,n-1,dp);
       }
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
       return solve(W,wt,val,n,dp);
    }
};

int main() {

int t;
cint;

while(t--)
{
int n, w; 
cin>>n>>w;

int val[n]; 
int wt[n];

for(int i=0;i<n;i++) 
cin>>val[i];

for(int i=0;i<n;i++) 
cin>>wt[i];

Solution ob;
cout<<ob.knapsack (w, wt, val, n)<<endl;

}
return 0;
}
