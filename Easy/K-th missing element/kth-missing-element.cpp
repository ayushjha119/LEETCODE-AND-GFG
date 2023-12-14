//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    int ans = a[0], mis_count = 0;
    
    for(int i=0;i<n;i++){
        while(ans!=a[i]){
            mis_count++;
            if(mis_count==k)
                return ans;
            ans++;
        }
        ans++;
    }
    return -1;
}