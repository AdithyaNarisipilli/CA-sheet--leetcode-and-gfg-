//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    vector<int>rightsmall(int A[],int n){
        vector<int>ans(n,0);
        stack<int>s;
        s.push(0);
        for(int i=n-1;i>=0;i--){
            if(A[i]>s.top()){
                ans[i]=s.top();
            }
            else{
                while(A[i]<=s.top()){
                    s.pop();
                }
                ans[i]=s.top();
            }
            s.push(A[i]);
        }
        return ans;
    }
    vector<int> leftsmall(int A[],int n){
         vector<int>ans(n,0);
        stack<int>s;
        s.push(0);
        for(int i=0;i<n;i++){
            if(A[i]>s.top()){
                ans[i]=s.top();
            }
            else{
                while(A[i]<=s.top()){
                    s.pop();
                }
                ans[i]=s.top();
            }
            s.push(A[i]);
        }
        return ans;
    }
    int findMaxDiff(int A[], int n)
    {
        
        vector<int>a=leftsmall(A,n);
        vector<int>b=rightsmall(A,n);
        int maxi=0;
        for(int i=0;i<n;i++){
            if(abs(a[i]-b[i])>maxi){
                maxi=abs(a[i]-b[i]);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends