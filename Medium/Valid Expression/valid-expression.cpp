//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
   int n=s.length();
   stack<char>stk;
   for(int i=0;i<n;i++){
       if(s[i]=='('||s[i]=='{'||s[i]=='['){
           stk.push(s[i]);
       }
       else{
           if(stk.empty()){
               return 0;
           }
           if((s[i]==')'&&stk.top()=='(')||(s[i]=='}'&&stk.top()=='{')||(s[i]==']'&&stk.top()=='[')){
               stk.pop();
           }
           else{
               return 0;
           }
           
       }
   }
   if(stk.size()!=0){
       return 0;
   }
   else{
       return 1;
   }
}