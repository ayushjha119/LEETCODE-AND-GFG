//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string rev(string temp){
     reverse(temp.begin(),temp.end());
        return temp;
    }
  
    string reverseWords (string s)
    {
        //code here.
        string temp="";
        string ans ="";
        string tans= "";
        int n = s.size();
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='.'){
                
                
               tans =  rev(temp);
               ans+= tans;
               ans+=".";
               tans="";
               temp="";
               
                
            }else{
                temp +=s[i];
                
                if(i==n-1)
                    {
                        tans =  rev(temp);
                        ans+= tans;
                    }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends