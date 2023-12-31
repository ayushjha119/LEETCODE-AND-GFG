//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        vector<vector<int>>dp(N+1,vector<int>(2025,-1));
        return solve(N,coins,2024,dp);
    }
    int solve(int n,int coins[],int sum,vector<vector<int>>&dp){
        if(n==0){
            if(sum == 0)return 1;
            int c = 2024-sum;
            if(c!=0){
            if(c%20 == 0 || c%24 == 0)return 1;
            }
            return 0;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        int a = solve(n-1,coins,sum-coins[n-1],dp);
        int b = solve(n-1,coins,sum,dp);
        if(a+b>0)return dp[n][sum] = 1;
        return dp[n][sum] = 0;
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends