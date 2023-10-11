//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[i]=-1;
            }
        }
        mpp[0]=0;
        int pfxsum=0;
        int count=0;
        for(int i=0;i<n;i++){
            pfxsum+=arr[i];
            if(pfxsum==0){
                count++;
            }
            if(mpp.find(pfxsum)!=mpp.end()){
                count+=mpp[pfxsum];
            }
        
            mpp[pfxsum]++;
            
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends