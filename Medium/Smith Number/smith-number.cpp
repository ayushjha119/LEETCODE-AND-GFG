//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int sumD(int n){
        int sum = 0;
        while(n>0){
            int r = n%10;
            sum+=r;
            n = n/10;
            
        }
        return sum;
    }
    
    int sumP(int n){
        int sum=0;
        int fact = 0;
        int i = 2;
        
        while(n>1){
            if(n%i==0){
                sum+=sumD(i);
                fact++;
                n = n/i;
                
            }else{
                i++;
            }
        }
        if(fact<=1)
            return 0;
        return sum;
    }
  
    int smithNum(int n) {
        // code here
        
        int a = sumD(n);
        int b = sumP(n);
        
        return a==b;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends