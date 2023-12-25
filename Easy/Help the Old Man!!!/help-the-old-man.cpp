//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void TOH(int src,int helper,int dest,vector<pair<int,int>>&ans,int n){
    if(n==1){
        ans.push_back({src,dest});
        return;
    }
    TOH(src,dest,helper,ans,n-1);
    ans.push_back({src,dest});
    TOH(helper,src,dest,ans,n-1);
}
    vector<int> shiftPile(int N, int n){
           vector<pair<int,int>>ans;
           vector<int>res;
           TOH(1,2,3,ans,N);
            res.push_back(ans[n-1].first);
            res.push_back(ans[n-1].second);
            return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends