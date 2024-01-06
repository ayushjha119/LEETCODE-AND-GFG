//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    bool isSafe(bool graph[101][101], vector<int> color_map, int v, int m, int n){
        for(int i=0; i<n; i++){
            if(graph[v][i] && color_map[i] == m) return false;
        }
        return true;
    }
    
    bool solve(bool graph[101][101], vector<int> color_map, int m, int n, int v){
        if(v==n) return true;

        
        for(int i = 1; i<=m; i++) {
            
            if(isSafe(graph, color_map, v, i, n)){
                color_map[v] = i;
                
                if(solve(graph, color_map, m, n, v+1))
                    return true;
            }
        }
        
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int> color_map(n);

        return solve(graph, color_map, m, n, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends