//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    int mod = 1e9+7;
    
    
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        
        //vector<long long> ans;
        vector<vector<long long>> temp(n);
        
        for(int i=0;i<n;i++){
            
            temp[i] = vector<long long>(i+1,1); 
            
            for(int j=1;j<i;j++){
                temp[i][j] = (temp[i-1][j] + temp[i-1][j-1])%mod;
                
            }
        }
        
        // for(int i=0;i<n;i++){
        //     ans.push_back(temp[i][n-1]);
        // }
        
        return temp[n-1];
        
        
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends