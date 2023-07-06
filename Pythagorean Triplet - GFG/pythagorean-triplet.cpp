//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	   sort(arr,arr+n);
	   int low,high;
	   for(int i=n-1;i>=0;i--){
	       low=0,high=i-1;
	   while(low<high){
	       if(arr[i]*arr[i]==(arr[high]*arr[high])+(arr[low]*arr[low])){
	           return true;
	       }
	       else{
	          arr[i]*arr[i]>((arr[high]*arr[high])+(arr[low]*arr[low]))?low++:high--; 
	       }
	   }
	   }
	   return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends