//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:

    int findR(int arr[], int x, int n)
    {
        int l = 0;
        int r = n - 1;
        int right_most = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
            {
                right_most = mid;
                l = mid + 1;
            }
            else if (arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return right_most;
    }

    int findL(int arr[], int x, int n)
    {
        int l = 0;
        int r = n - 1;
        int left_most = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
            {
                left_most = mid;
                r = mid - 1;
            }
            else if (arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return left_most;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int left = findL(arr,x,n);
        int right = findR(arr,x,n);
        
        return {left,right};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends