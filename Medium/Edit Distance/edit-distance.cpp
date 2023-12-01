//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int eD(string &s, string &t, int m, int n, vector<vector<int>>& dp) {
    if(m==0) return n;
    if(n==0) return m;
    if(dp[m][n] != -1) return dp[m][n];
    if(s[m-1] == t[n-1]) return dp[m][n] = eD(s, t, m-1, n-1, dp);
    else return dp[m][n] = 1 + min(eD(s, t, m, n-1, dp), min(eD(s, t, m-1, n, dp), eD(s, t, m-1, n-1, dp)));
}

int editDistance(string s, string t) {
    int m = s.length();
    int n = t.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
    return eD(s, t, m, n, dp);
}
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends