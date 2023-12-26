//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes her
        int n = X.size();
       int m = Y.size();
       int carry = 0;
       string ans;
       while(n || m || carry){
           int n1 = (n == 0) ? 0 : X[n-1]- '0'; 
           int n2 = (m == 0) ? 0 : Y[m-1]- '0';
           int total = n1+ n2+ carry;
           if(n) n--;
           if(m) m--;
           carry = total / 10; 
           total = total % 10;
           ans = to_string(total) + ans;
           
       }
       int i=0;
       while(i<ans.size() && ans[i] == '0')
           i++;
       ans = ans.substr(i);
       return (ans != "") ? ans : "0";
   
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends