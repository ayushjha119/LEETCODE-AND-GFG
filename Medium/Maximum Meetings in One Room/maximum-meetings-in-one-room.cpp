//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    struct Meet {
        int ind;
        int start;
        int end;
    };
    
    static bool comp(Meet a , Meet b) {
        if(a.start == b.start) {
            return a.ind < b.ind;
        }
        return a.end < b.end;
    }

    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<Meet> meetings;
        vector<int> ans;
        
        for(int i = 0 ; i < N ; i++) {
            Meet m;
            m.ind = i;
            m.start = S[i];
            m.end = F[i];
            meetings.push_back(m);
        }
        
        // Sort according to the end time in increasing manner , 
        // more chances in getting more max number of meetings.
        sort(meetings.begin(),meetings.end(),comp);
        
        int prev_end = meetings[0].end;
        ans.push_back(meetings[0].ind + 1);
        
        for(int i = 1 ; i < N ; i++) {
            // The next meeting is allowed in the room if
            // next_meeting.start > prev_meeting.end
            if(meetings[i].start > prev_end) {
                prev_end = meetings[i].end;
                ans.push_back(meetings[i].ind + 1);
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends