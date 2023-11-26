//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void solve2(int x,int N,vector<int> &ans){
        if(x>N)
            return;
        else
            {
                ans.push_back(x);
                return solve2(x+5,N,ans);
            }
    }
        
    int solve1(int N,vector<int> & ans){
        if(N>0)
            {
                ans.push_back(N);
                return solve1(N-5,ans);
            }
        else
            return N;
    }

    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        
       int x = solve1(N,ans);
       
       solve2(x,N,ans);
       
       return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends