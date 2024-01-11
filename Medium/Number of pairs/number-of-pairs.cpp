//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long countPairs(int x[], int y[], int m, int n) {
        // code here
         vector<double> vx;
    vector<double> vy;

    for (int i = 0; i < m; ++i) {
        double sum =(double) x[i]/(double) log(x[i]);
        vx.push_back(sum);
    }
    for (int i = 0; i < n; ++i) {
        double sum = (double)y[i]/(double) log(y[i]);
        vy.push_back(sum);
    }
    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());

    long long count = 0;
    for(auto z : vy)
    {
      
        long long int temp3 = lower_bound(vx.begin(),vx.end(),z) - vx.begin();
        count = count + temp3;
    }
    return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends