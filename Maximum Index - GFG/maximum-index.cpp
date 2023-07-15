//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int maxi=INT_MIN;
        vector<int>a(n);
        vector<int>b(n);
        a[0]=arr[0];
        b[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            a[i]=min(a[i-1],arr[i]);
            b[n-i-1]=max(b[n-i],arr[n-i-1]);
        }
        int ans=0,i=0,j=0;
        while(j<n&&i<n){
            if(b[j]>=a[i]){
                ans=max(ans,j-i);
                j++;
            }
            else{
               i++; 
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
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends