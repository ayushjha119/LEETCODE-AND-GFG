//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        
       stack<int> s;
int maxi = INT_MIN;
s.push(-1);

for (int i = 0; i < S.length(); i++) {
    if (S[i] == '(') {
        s.push(i);
    } else {
        if (!s.empty() && S[s.top()] == '(') {
            s.pop();
            if (!s.empty()) {
                maxi = max(maxi, i - s.top());
            } else {
               
                s.push(i);
            }
        } else {
            s.push(i);
        }
    }
}

if (maxi == INT_MIN) {
    return 0;
}

return maxi;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends