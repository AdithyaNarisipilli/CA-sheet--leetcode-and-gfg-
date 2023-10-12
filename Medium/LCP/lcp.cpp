//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        if(n==0){
            return "-1";
        }
        if(n==1){
            return ar[0];
        }
        sort(ar,ar+n);
        int lenofsmall=ar[0].length();
        string ans="";
        for(int i=0;i<lenofsmall;i++){
            if(ar[0][i]==ar[n-1][i]){
                ans+=(ar[0][i]);
            }
            else{
                break;
            }
        }
        if(ans==""){
            return "-1";
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}
// } Driver Code Ends