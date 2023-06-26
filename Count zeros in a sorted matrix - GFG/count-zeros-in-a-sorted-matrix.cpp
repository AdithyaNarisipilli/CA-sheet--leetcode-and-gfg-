//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    int n=A.size();
	    int i=0,j=0;
	    int ans=0;
	    while(i<n&&j<n){
	        if(A[i][j]==0){
	            ans++;
	            j++;
	            if(j==n)
	            {
	                i++;
	                j=0;
	            }
	        }
	        else{
	            i++;
	            j=0;
	        }
	    }
	    return ans;
	    
	    
	    
	
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends