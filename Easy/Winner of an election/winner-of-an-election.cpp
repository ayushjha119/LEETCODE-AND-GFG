//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
         map<string,int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int mn=-1;
        vector<string> ans;
        for(auto it:mp)
        {
            if(it.second>mn)
            {
                ans.clear();
                ans.push_back(it.first);
                mn=it.second;
            }
            else if(it.second==mn)
            {
                ans.push_back(it.first);
                mn=it.second;
            }
        }
        string mnn= to_string(mn);
        vector<string> v;
        v.push_back(ans[0]);
        v.push_back(mnn);
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends