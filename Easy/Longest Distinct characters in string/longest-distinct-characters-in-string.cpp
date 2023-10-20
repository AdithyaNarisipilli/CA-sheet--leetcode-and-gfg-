//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int maxi=1;
    int n=S.length();
    unordered_map<char,int>mpp;
    int len=1;
    mpp[S[0]]=0;
    for(int i=1;i<n;i++){
        if(mpp.find(S[i])==mpp.end()){
            len++;
            maxi=max(maxi,len);
            mpp[S[i]]=i;
        }
        else{
            len=0;
            i=mpp[S[i]];
            mpp.clear();
        }
    }
    return maxi;
}