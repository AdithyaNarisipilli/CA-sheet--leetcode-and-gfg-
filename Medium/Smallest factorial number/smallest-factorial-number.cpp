//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int trail(int mid){
            int ans=0;
            while(mid){
                ans+=(mid/5);
                mid=mid/5;
            }
            return ans;
        }
        int findNum(int n)
        {
            //here you have to use the binary search
            int low=0,high=1e9,ans=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                int a=trail(mid);
                if(a>=n){
                    ans=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends