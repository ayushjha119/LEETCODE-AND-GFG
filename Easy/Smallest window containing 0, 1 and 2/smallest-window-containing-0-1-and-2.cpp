//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        int zi=-1,oi=-1,ti=-1;
        int sol=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zi=i;
            }
            else if(s[i]=='1'){
                oi=i;
            }
            else{
                ti=i;
            }
            if(oi!=-1 && ti!=-1 && zi!=-1){
                int x=min(zi,min(oi,ti));
                sol=min(sol,(i-x)+1);
            }
        }
        return (sol!=INT_MAX) ? sol: -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends