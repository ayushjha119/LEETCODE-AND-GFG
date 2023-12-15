//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
// 	int t[1000001];
	int mod = 1e9+7;
// 	    int solve(int n){
// 	        if(n==0)
// 	            return 0;
// 	       if(n==1)
// 	        return 1;
// 	       if(n==2)
// 	        return 2;
	        
// 	        if(t[n]!=-1)
// 	            return t[n];
	        
// 	        int one =  solve(n-1);
// 	        int two =  solve(n-2);
	        
// 	        return t[n] = (one%mod + two%mod)%mod;
// 	    }
	
		int nthPoint(int n){
		    // Code here
		   
		   int dp[1000001];
		   dp[0] = 1;
		   dp[1] = 1;
		   //dp[2] = 2;
		   for(int i=2;i<=n;i++){
		       dp[i] = (dp[i-1]+dp[i-2])%mod;
		   }
		    
		    return dp[n];
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends