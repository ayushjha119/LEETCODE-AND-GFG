//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
          vector<int> prefixMin(n);
        prefixMin[0]=arr[0];
        for(int i=1;i<n;i++) {
            prefixMin[i]=min(prefixMin[i-1],arr[i]);
        }
        int i=n-1,j=n-1,maxlen=INT_MIN;
        while(i>=0 and j>=0) {
            if(prefixMin[i]<=arr[j]) {
                maxlen=max(maxlen,j-i);
                i--;
            } else j--;
        }
        return maxlen;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends