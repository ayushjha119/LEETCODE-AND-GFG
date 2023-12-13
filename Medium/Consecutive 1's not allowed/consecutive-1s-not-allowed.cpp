//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll mod = 1e9+7;
	    ll a[n+3];
	    
	    a[0] = 0;
	    a[1] = 1;
	    
	    for(int i=2;i<=n+2;i++){
	        a[i] = (a[i-2] + a[i-1])%mod;
	        //cout<<a[i]<<" ";
	        
	        
	    }
	    
	    return (a[n+2]) % mod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends