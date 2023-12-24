//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        
    vector<pair<int, int> > v;

    // Making pair of product price and number
    // day and sorting the pair
    for (int i=0; i<n; ++i)
        v.push_back(make_pair(price[i], i+1)); 

    sort(v.begin(), v.end()); //sort the vector

    // Calculating the maximum number of stocks count
    int ans = 0;
    for (int i=0; i<n; ++i)
    {
        // Buy as much as we can
        ans += min(v[i].second, k/v[i].first);
        k -= v[i].first * min(v[i].second, (k/v[i].first));
    }

    return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends