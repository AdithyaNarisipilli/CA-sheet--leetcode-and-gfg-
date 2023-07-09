//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<int>st;
        int n=s.length();
        if(n&1){
            return false;
        }
        for(int i=0;i<n;i++){
            if((s[i]=='(') or (s[i]=='{')or (s[i]=='[')){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char c=st.top();
                st.pop();
                if((c=='('&& s[i]==')')or(c=='{'&& s[i]=='}') or (c=='['&&s[i]==']') ){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends