//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int t[1001][1001];
  
  bool solve(string &s,int i,int j){
      if(i>=j)
        return 1;
        
    if(t[i][j]!=-1)
        return t[i][j];
    
    if(s[i]==s[j])
        return t[i][j] = solve(s,i+1,j-1);
        
    return t[i][j]=0;
  }
  
    string longestPalin (string s) {
        // code here
        
        int n = s.length();
        int maxm = INT_MIN;
        int sp = 0;
         memset(t, -1, sizeof(t));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)==true){
                    if(j-i+1 > maxm)
                    {
                        maxm = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp,maxm);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends