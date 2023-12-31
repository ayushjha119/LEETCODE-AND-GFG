//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
   int t[201][201];
    
    int solve(int n,int k){
        if(n==1)
            return k;
        if(k==1 || k==0)
            return k;
        if(t[n][k]!=-1)
            return t[n][k];
        int ans = INT_MAX;
        for(int i=1;i<=k;i++){
            int temp = 1 + max(solve(n-1,i-1), solve(n,k-i));
            ans = min(temp,ans);
        }
        
        return t[n][k] = ans;
    }
    
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(t,-1,sizeof(t));
        return solve(n,k);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends