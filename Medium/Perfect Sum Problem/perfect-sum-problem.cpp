//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	#define vi vector<int>
	public:
	int mod = 1e9 + 7;
	int helper( int arr[], int ind, int sum, vector<vi> &dp ){
	    if(ind == 0){
            if(sum==0 and arr[0]==0) 
                return 2;

            if(sum==0 or sum==arr[0]) 
                return 1;
           return 0;
        }
	    if( dp[ind][sum] != -1 )
	        return dp[ind][sum];
	    
	    int pick = 0;
	    if( arr[ind]<=sum )
	        pick = helper( arr, ind-1, sum-arr[ind], dp );
	    
	    int notPick = helper( arr, ind-1, sum, dp );
	    
	    return dp[ind][sum] = (pick+notPick)%mod;
	}
	
	// the approach should be like that helper will return the number of subsets with given sum
	int perfectSum(int arr[], int n, int sum){
	    vector<vi> dp( n, vi(sum+1, -1));
	    return helper( arr, n-1, sum, dp );
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends