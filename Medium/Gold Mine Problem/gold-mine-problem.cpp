//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[501][501];
    int solve(int i,int j,int n,int m,vector<vector<int>> &mat){
        
        if(i>=n || i<0 ||  j>=m || j<0)
            return 0;
            
        if(t[i][j]!=-1)
            return t[i][j];
        
        int upd = solve(i-1,j+1,n,m,mat);
        int r = solve(i,j+1,n,m,mat);
        int dd = solve(i+1,j+1,n,m,mat);
        
        return t[i][j] = mat[i][j]+max(upd, max(r,dd));
            
    }
    
    

    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        memset(t,-1,sizeof(t));
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            ans = max(ans,solve(i,0,n,m,M));
            
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends