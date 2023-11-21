//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


//   sort(a,a+n);
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             ans = (ans + i*a[i])%1000000007;
//         }
        
//         return ans;

class Solution{
    public:
    
    
    
    int Maximize(int a[],int n)
    {
        // Complete the function
        int mod  = 1e9+7;
        sort(a,a+n);
        unsigned long long int ans = 0;
        for(int i=0;i<n;i++){
           ans = (ans + ((unsigned long long)a[i]*i)%mod )%mod;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends