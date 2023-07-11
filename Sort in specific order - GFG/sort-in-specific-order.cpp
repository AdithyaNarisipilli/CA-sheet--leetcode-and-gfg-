//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<long long>even;
        vector<long long>odd;
        for(int i=0;i<n;i++){
            if(arr[i]&1){
                odd.push_back(arr[i]);
            }
            else{
                even.push_back(arr[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(long long i=0;i<n;i++){
            
            if(i>=odd.size()){
                arr[i]=even[i-odd.size()];
            }
            else{
                arr[i]=odd[odd.size()-1-i];
            }
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends