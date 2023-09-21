//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstocc(int arr[],int n,int x){
        int low=0,high=n-1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                high=mid-1;
                ans=mid;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int lastocc(int arr[],int n,int x){
        int low=0,high=n-1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                low=mid+1;
                ans=mid;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        
        int a=firstocc(arr,n,x);
        int b=lastocc(arr,n,x);
        
        return {a,b};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends