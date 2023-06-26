//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        //given to do in O(logn) complexity
        int low=0,high=n-1;
        int mid=(low+high)/2;
        while(low<=high){
            mid=(low+high)/2;
            if(((mid == 0 || arr[mid - 1] == 1) &&
                         arr[mid] == 0)){
                return n-mid;
            }
            else if(arr[mid]==1) {
                low=mid+1;
            }
            else if(arr[mid]==0){
                high=mid-1;
            }
        }
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends