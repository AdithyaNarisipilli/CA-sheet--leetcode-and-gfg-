//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long count(int x,int Y[],int NoofY[],int n){
        if(x==0)return 0;
        if(x==1)return NoofY[0];//if x==1 no of zeroes in Y
        int *upb=upper_bound(Y,Y+n,x);
        int ans=Y+n-upb;
        ans+=NoofY[0]+NoofY[1];
        if(x==2){
            ans-=(NoofY[3]+NoofY[4]);
        }
        if(x==3){
            ans+=NoofY[2];
        }
        return ans;
    }
    long long countPairs(int X[], int Y[], int m, int n) {
        // code here
        int NoofY[5]={0};
        for(int i=0;i<n;i++){
            if(Y[i]<5){
                NoofY[Y[i]]++;
            }
        }
        sort(Y,Y+n);
        long long total_pairs=0;
        for(int i=0;i<m;i++){
            total_pairs+=(count(X[i],Y,NoofY,n));
        }
        return total_pairs;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends