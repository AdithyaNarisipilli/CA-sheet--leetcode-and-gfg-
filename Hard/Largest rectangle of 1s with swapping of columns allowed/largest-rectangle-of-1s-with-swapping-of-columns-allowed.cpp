//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns area of the largest rectangle of 1's
	int maxArea(vector<bool> mat[], int r, int c) {
	    vector<vector<int>>v(r,vector<int>(c,0));
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(i==0){
	                v[i][j]=mat[i][j];
	            }
	            else{
	               v[i][j]=mat[i][j]==0?0:mat[i][j]+v[i-1][j];
	            }
	        }
	    }
	    int ans=0;
	    for(int i=0;i<r;i++){
	        sort(v[i].rbegin(),v[i].rend());
	        for(int j=0;j<c;j++){
	            ans=max(ans,(j+1)*v[i][j]);
	        }
	    }
	    
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c, x;
        cin >> r >> c;
        vector<bool> mat[r];
        for (int i = 0; i < r; i++) {
            mat[i].assign(c, false);
            for (int j = 0; j < c; j++) {
                cin >> x;
                mat[i][j] = x;
            }
        }
        Solution ob;
        auto ans = ob.maxArea(mat, r, c);
        cout << ans << "\n";

    }
    return 0;
}

// } Driver Code Ends