//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int selectKcities(int n, int k, vector<vector<int>>& mat){
        //code here
        int ans=1000000000;
        for(int i=0;i<n;i++)
        {
            int dummy=i;
            vector<int> dis(n,1000000000);
            for(int j=0;j<k;j++)
            {
                for(int z=0;z<n;z++)
                {
                    dis[z]=min(dis[z],mat[dummy][z]);
                }
                dummy=max_element(dis.begin(),dis.end())-dis.begin();
                ans=min(ans,dis[dummy]);
                // cout<<ans<<" ";
            }
            // cout<<endl;
        }
        return ans;
    }
};



//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> mat(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        
        Solution obj;
        int ans = obj.selectKcities(n, k, mat);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends