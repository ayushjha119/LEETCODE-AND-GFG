//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findWinner(int n, int a[]){
        //for(int i=0;i<n;i++){x^=a[i];}
        long long int x=0;
       for(int i=0;i<n;i++){x^=a[i];}
       if(x==0)return 1;
       else {
            
           if(n%2==0) return 1;
           else return 2;
           
       } 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends