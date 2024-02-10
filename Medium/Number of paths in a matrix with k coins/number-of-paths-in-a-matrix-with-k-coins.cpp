//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    
     int t[101][101][101];
    long long helper(vector<vector<int>> &arr, int n, int k, int i, int j){
        if(k < 0 || i >= n || i < 0 || j >= n || j < 0)   return 0;
        if(i == 0 && j == 0)    return (k == arr[0][0] ? 1 : 0);
        
        if(t[i][j][k] != -1)    return t[i][j][k];
        
        long long res = 0;
        res += helper(arr, n, k - arr[i][j], i - 1, j);
        res += helper(arr, n, k - arr[i][j], i, j - 1);
        
        return t[i][j][k] = res;
    }
    
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        // Code Here
        memset(t, -1, sizeof(t));
        if(arr[0][0] > k)   return 0;
        return helper(arr, n, k, n - 1, n - 1);
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends