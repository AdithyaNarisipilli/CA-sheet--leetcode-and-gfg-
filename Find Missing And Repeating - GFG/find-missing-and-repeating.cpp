//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    vector<int> findTwoElement(vector<int> arr, long long int n) {
        long long int ans=0;
        for(long long int i=0;i<n;i++){
            ans^=arr[i];
        }
        for(long long int i=0;i<n;i++){
            ans^=(i+1);
        }
        long long int setbit=ans&(~(ans-1));
        
        long long int zero=0,one=0;
        for(int i=0;i<n;i++){
            if(arr[i]&setbit)
              one^=arr[i];
            else{
                zero^=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if((i+1)&setbit)
              one^=(i+1);
            else{
                zero^=(i+1);
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(zero==arr[i]){
               count++; 
            }
        }
        
        if(count==2)return {(int)zero,(int)one};
        return {(int)one,(int)zero};
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends