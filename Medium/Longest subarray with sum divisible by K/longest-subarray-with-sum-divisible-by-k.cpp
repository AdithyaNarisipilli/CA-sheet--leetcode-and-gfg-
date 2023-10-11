//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    //if you get the same remainder then the numbers between them will satisfy the given condition
	    map<int,int>mpp;
	    int pfxsum=0;
	    mpp[0]=-1;
	    int len=0;
	    int rmd=0;
	    for(int i=0;i<n;i++){
	        pfxsum+=arr[i];
	        rmd=pfxsum%k;
	        if(rmd<0){
	            rmd=rmd+k;//this is for all negetive numbers
	        }
	        if(mpp.find(rmd)!=mpp.end()){
	            len=max(len,i-mpp[rmd]);
	        }
	        else{
	            mpp[rmd]=i;
	        }
	    }
	    return len;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends