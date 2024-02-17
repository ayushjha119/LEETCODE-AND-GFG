//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
  bool isMaxHeap(int a[], int n)
    {
        int first = 1;
        int last  = 2;
        if(n == 1)
            return true;
        if(n==2 and a[0] >= a[1])
        {
            return true;
        }
        if(n==2 and a[0] < a[1])
            return false;

        if(a[0]<a[1] || a[0]<a[2])
            return false;

        for(int i = 1; i < n; i++)
        {
            first = last+1;
            last =  first+1;
            if(first<n && last <n)
            {
                if(a[i] < a[first] || a[i] < a[last])
                    return false;
            }
            else if(first < n)
            {
                if(a[i] < a[first])
                    return false;
            }    
               
            
        }
        return true;

    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends