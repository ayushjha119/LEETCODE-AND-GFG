//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here.
	   for(int i=1;i<=31;i++){
	       int num = n-i, o = 0;
	       if(num>=0){
	           for(int j=0;j<31;j++){
	               if(num&(1<<j))
	                o++;
	                
	           }
	       }
	       if(o==i)
	        return 0;
	   }
	   
	   return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends