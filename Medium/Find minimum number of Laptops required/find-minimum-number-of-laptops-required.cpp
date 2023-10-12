//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        map<int,int>mpp;
        for(int i=0;i<N;i++){
            mpp[start[i]]++;
            mpp[end[i]]--;
        }
        //in a map they will be in sorted fashion
        int sec=0;
        int ans=0;
        for(auto it:mpp){
            sec+=it.second;
            ans=max(ans,sec);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends