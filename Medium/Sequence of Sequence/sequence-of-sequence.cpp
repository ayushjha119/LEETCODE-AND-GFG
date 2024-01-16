//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int numberSequence(int m, int n){
        // code here
         vector<int> dp(m+1,1);
        for(int i=1;i<=n;i++) {
            vector<int> ndp(m+1);
            for(int j=1;j<=m;j++) {
                ndp[j]=ndp[j-1]+dp[j/2];
            }
            dp=ndp;
        }
        return dp[m];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends