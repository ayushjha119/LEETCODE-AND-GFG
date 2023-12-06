//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
        sort(a,a+n);
        
        for(int i=0;i<n-1;i++){
            int temp = a[i];
            
            int j = i+1;
            int k = n-1;
            while(j<k){
                if(temp+a[j]+a[k]==X){
                    return 1;
                }else if(temp+a[j]+a[k]<X){
                    j++;
                }else{
                    k--;
                }
            }
        }
        
        return 0;
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends