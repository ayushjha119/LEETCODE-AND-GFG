//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long solve(int a[],int n,int k){
        long ans = 0;
        int i = 0, j = 0;
        
        while(j<n){
            if(a[j]>k){
                i = j+1;
                j++;
            }else{
                ans+=j-i+1;
                j++;
                
            }
        }
        return ans;
    }
    
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        return solve(a,n,R)-solve(a,n,L-1);
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends