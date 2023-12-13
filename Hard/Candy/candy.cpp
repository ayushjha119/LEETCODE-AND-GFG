//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int minCandy(int N, vector<int> &ratings) {
        vector<int> l2r(N, 1);
        vector<int> r2l(N, 1);
        
        for(int i = 1; i < N; i++) {
            if(ratings[i] > ratings[i-1]) l2r[i] = l2r[i-1] + 1;
        }
        
        for(int i = N-2; i >= 0; i--) {
            if(ratings[i] > ratings[i+1]) r2l[i] = r2l[i+1] + 1;
        }
        
        int sum = 0; 
        
        for(int i = 0; i < N; i++) {
            int m = max(l2r[i], r2l[i]);
            sum += m;
        }
        
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends