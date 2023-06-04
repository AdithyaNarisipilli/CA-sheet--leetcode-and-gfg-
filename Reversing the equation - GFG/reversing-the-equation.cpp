//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            vector<string>v;
            vector<char>c;
            string a="";
            int l=s.length();
            for(int i=0;i<l;i++){
                if(s[i]>='0'&&s[i]<='9'){
                     a+=s[i];
                    
                }
                else{
                    v.push_back(a);
                    c.push_back(s[i]);
                    a="";
                }
                if(i==l-1){
                    a+=s[i];
                    v.push_back(a);
                }
                
            }
            string adi="";
            int m=v.size()-1;
            int n=c.size()-1;
            // cout<<m<<" "<<n<<endl;
            while(m>=0 || n>=0){
                if(m>=0)
                {
                    adi+=v[m];
                    m--;
                }
                if(n>=0)
                {
                    adi+=c[n];
                    n--;
                }
            }
            
            // cout<<m<<" "<<n<<endl;
            adi.erase(1,1);
            return adi;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends