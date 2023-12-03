//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        // code here
         long ans2 = count(N,A,R);
         long ans1 = count(N,A,L-1);
         return (ans2-ans1);
    }
    long count(int n,vector<int> arr,long x){
        long ans=0, sum=0;
        for(int r=0,l=0;r<n;r++){
            sum+=arr[r];
            while(sum>x){
                sum-=arr[l++];
            }
            ans+=(r-l+1);
        }
        return ans;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends