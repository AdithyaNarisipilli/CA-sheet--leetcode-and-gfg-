//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        string ans="";
        int k=K;
        for(int i=0;i<S.length();i++){
            while(ans.size()&&ans.back()>S[i]&&k){
                ans.pop_back();
                k--;
            }
            if(ans.size()||S[i]!='0'){
                ans.push_back(S[i]);
            }
        }
        while(ans.size()&&k){
            ans.pop_back();
            k--;
        }
        if(ans==""){
            return "0";
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends