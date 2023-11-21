//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


/*

    string longestCommonPrefix (string arr[], int n)
    {
        
        // your code here
        string ans = "";
        for(int i=0;i<arr[0].length();i++){
            char ch  = arr[0][i];
            
            bool match = true;
            
            
            for(int j = 1;j<n;j++){
                if(arr[j].size()< i || ch != arr[j][i] ){
                    match = false;
                    break;
                }
        }
        if(match==false)
            break;
        else
            ans.push_back(ch);
        }
        return ans;
            
    }
*/
class Solution{
  public:
  
      bool startswith(string str1, string str2){
        int l = str2.length();
        for(int i = 0; i < l; i++){
            if(str1[i] != str2[i]){
                return false;
            }
        }
        return true;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        
        // your code here
       string tmp = arr[0];
        for(int i = 0; i < N; i++){
            while(false == startswith(arr[i],tmp)){
                tmp.pop_back();
            }
        }
        if(tmp == ""){
            return "-1";
        }
        return tmp;
            
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends