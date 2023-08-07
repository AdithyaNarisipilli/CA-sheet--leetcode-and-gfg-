//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        unordered_map<char,int>mpp;
        for(int i=0;i<A.length();i++){
            mpp[A[i]]++;
        }
        for(int i=0;i<B.length();i++){
            mpp[B[i]]--;
        }
        for(auto it:mpp){
            if(it.second!=0) return -1;
        }
        int n=A.length();
        int i=n-1,j=n-1;
        int count=0;
        while(i>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                i--;
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends