//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool canweplace(vector<int>&stalls,int n,int k,int mid){
        int count=0;
        int last=stalls[0];
        int cowscount=1;
        for(int i=0;i<n;i++){
            if(stalls[i]-last>=mid){
                cowscount++;
                last=stalls[i];
            }
            if(cowscount>=k)return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        int low=1;
        int max=*max_element(stalls.begin(),stalls.end());
        int min=*min_element(stalls.begin(),stalls.end());
        int high=max-min;
        int ans;
        sort(stalls.begin(),stalls.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canweplace(stalls,n,k,mid)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends