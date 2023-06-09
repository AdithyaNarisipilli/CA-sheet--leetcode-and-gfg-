//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n=S.length();
        string temp=""; 
        string ans="";
        for(int i=n;i>=0;i--){
            if(S[i]=='.'){
                ans=ans+temp+S[i];
                temp="";
            }
            else{
                temp=S[i]+temp;
            }
        }
        return ans+=temp;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends