//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int ar[], int n) 
    { 
    	// Your code goes here 
    	long long x = 0;
    	sort(ar, ar + n);
        for(int i = 0, j = n - 1; i < j;) {
            if(ar[i] + ar[j] > 0) x += j - i, --j;
            else ++i;
        }
        
        return x;
    }   
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 


// } Driver Code Ends