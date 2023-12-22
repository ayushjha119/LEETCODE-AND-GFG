//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    
    long long int f(int coins[], int idx, int sum,vector<vector<long long int>>&t){
       if(idx==0)
            return sum%coins[idx]==0;
            
        if(t[idx][sum]!=-1)
            return t[idx][sum];
            
        long long int nottake = f(coins,idx-1,sum,t);
        
        long long int take = 0;
        
        if(coins[idx]<=sum){
            take = f(coins,idx,sum-coins[idx],t);
            
        }
        
        return t[idx][sum] = take+nottake;
    }
  
    long long int count(int coins[], int N, int sum) {

        // code here.
        //memset(t,-1,sizeof(t));
        vector<vector<long long int>>t(N,vector<long long int>(sum+1,-1));
        return f(coins,N-1,sum,t);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends