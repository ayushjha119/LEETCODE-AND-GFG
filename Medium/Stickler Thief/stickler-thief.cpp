//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int t[1000001];
    
    int solve(int arr[],int i){
        
        if(i<0)
            return 0;
            
        if(t[i]!=-1)
            return t[i];
        
        int take = arr[i]+ solve(arr,i-2);
        int ntake = solve(arr,i-1);
        return t[i] =  max(take,ntake);
        
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        memset(t,-1,sizeof(t));
        return solve(arr,n-1);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends