//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function for finding determinant of matrix.
     void help(vector<vector<int>>& mat, vector<vector<int>>& cof, int left, int n) {
    int x = 0, y = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == left) {
                continue;
            }
            cof[x][y++] = mat[i][j];
        }
        x++;
        y = 0; // Reset the column index for each row
    }
}
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
       int ans = 0;
    if (n == 1) return matrix[0][0];

    vector<vector<int>> cof(n - 1, vector<int>(n - 1, 0));

    int sign = 1;

    for (int i = 0; i < n; i++) {
        help(matrix, cof, i, n);
        ans += sign * matrix[0][i] * determinantOfMatrix(cof, n - 1);
        sign = -sign;
    }

    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends