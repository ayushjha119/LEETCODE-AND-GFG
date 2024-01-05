//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int dp[100001];
	   int mod = 1e9 + 7;
    #define ll long long 
    ll solve(int index , int N)
    {
        if(index >= N) return 1;
        if(dp[index] != -1) return dp[index];
        
        ll build  = solve(index+2,N) % mod;
        
        ll notBuild = solve(index+1,N)%mod;
        
        return dp[index] =  (build + notBuild) % mod;
    }
    public:
    int TotalWays(int N)
    {   
        memset(dp,-1,sizeof(dp));
        ll ans = solve(0,N);
        return (ans * ans )% mod;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends