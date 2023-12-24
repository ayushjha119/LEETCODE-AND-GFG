//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int nextHappy(int N){
        while(true) 
            if(check(++N))
                return N;
    }
    
    bool check(int n) {
        if(n == 1 || n == 7)  return true;
        if(n/10 == 0) return false;         // Both of the lines works alike (next line)
        // if(n==2 || n==3 || n==4 || n==5 || n==6 || n==8 || n==9)    return false;
        int sum = 0;
        while(n>0) {
            sum += pow(n%10,2);
            n /= 10;
        }
        return check(sum);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends