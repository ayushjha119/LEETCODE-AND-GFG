//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    
     //given string ko traverse aur map mein store krte chlenge jabtak size of map k nhi ban jaata
    
   
    //We'll traverse the string and will keep on adding elements in the map with their respective frequency
    
    //map bnao 
    unordered_map<char,int> mp;
    
    //SIZE OF MAP WILL SHOW THE NUMBER OF THE CHARACTERS
    
    int ans = -1;
    //windows ki shruwat zero se krenge
    int i = 0;
    int j = 0;
    
    //purri string ka safar krenge
    
    //TRAVERSE THE STRING
    while(j<s.length())
    {
        //saath saath elements ko store krte chlenge aur saath mein frequency ko bhi bdayenge
        
        //INCREMENTING THE FREQUENCY OF CHARACTERS
        mp[s[j]]++;
        
        //3 alag alag case ho skte hai 
        //THERE WILL BE THREE DIFFERENT CASES 
        
        //FIRST WOULD BE IF OUR MAP SIZE IS LESS THAN K 
        //IT MENAS WE HAVEN'T REACHED THE K NUMBER OF CHARACTERS YET
        
        //map ka size will show the number of characters
        
        //1--> jab hmari substring mein k se kam characters honge  if(mp.size() < k) = khidki bdao 
        //ye case automatically handle ho jayega j++;
       
   
        //2--> jab hmari subtring mein k characters honge mp.size() == k
        // THIS COULD BE OUR POSSIBLE CANDIDATE
        if(mp.size() == k)
        
            //iss wqt humein answer mil gya hai 
            //WILL CALCULATE THE ANSWER
            ans = max(ans, (j-i)+1);
            
            //ans milne ke baad j++ ho jayega LINE 66
        
        
        
        //3--> jab hmari subring mein k se jyada characters honge mp.size() > k
        
            //jab tk element ko map se remove kro tabtk map ka size k se bda hai
            
            //NUMBER OF CHARACTERS BECAME GREATER THAN K 
            while(mp.size() > k) 
            {
                //WILL DECREAMENT THE COUNT OF CHARACTERS FROM THE FRONT OF THE WINDOW
                mp[s[i]]--;
                //agar kisi element ka count zero ho gya it means ki uss element ko remove krenge toh 
                //mp.size aur k match kar jayega
                //CHARACTER COUNT == 0??? ERASE THE ELEMENT FROM MAP
                if(mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            
            
            j++; //aage bdte chlo
        
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends