//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        //here find minimum subarray sum and substract from total sum
        int sum=0,max_sum=0,maxi=INT_MIN,min_sum=0,mini=INT_MAX;
        for(int i=0;i<num;i++){
            sum+=arr[i];
            max_sum+=arr[i];
            if(max_sum>maxi){
                maxi=max_sum;
            }
            if(max_sum<0){
                max_sum=0;
            }
            min_sum+=arr[i];
            if(min_sum<mini){
                mini=min_sum;
            }
            if(min_sum>0){
                min_sum=0;
            }
        }
        if(sum==mini){
            return maxi;
        }
        return max(sum-mini,maxi);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends