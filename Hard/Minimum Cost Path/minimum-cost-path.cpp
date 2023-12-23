//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.4
// 	int m,n;

	
     bool isvalid(int i, int j, int row, int col){
    if(i<0 || j<0 || i>=row || j>=col)return false;
    return true;
}
   int minimumCostPath(vector<vector<int>>& grid) 
   {
       // Code here
       int row = grid.size(), col = grid[0].size(), 		    fcost =0;
       vector<vector<int>> dist(row, vector<int>(col, INT_MAX));
       dist[0][0] = grid[0][0];
       priority_queue< pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
       int dx[4] = {1,-1,0,0};
       int dy[4] = {0,0,1,-1};
       pq.push({dist[0][0],{0,0}});
       while(!pq.empty()){
           auto p = pq.top();
           pq.pop();
           int cost = p.first;
           auto q = p.second;
           int i = q.first;
           int j = q.second;
           fcost += cost;
           if(i==row-1 && j==col-1) break;
           for(int k =0; k<4; ++k){
               int xdx = i + dx[k];
               int ydy = j + dy[k];
               if(isvalid(xdx, ydy, row, col)){
                   if(dist[xdx][ydy]>=dist[i][j]+grid[xdx][ydy]){
                       dist[xdx][ydy] = dist[i][j] + grid[xdx][ydy];
                       pq.push({dist[xdx][ydy],{xdx, ydy}});
                   }
               }
           }
       }
       return dist[row-1][col-1];
   }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends