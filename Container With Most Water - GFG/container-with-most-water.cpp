//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    int i,j,level,max=0;
    i=0,j=len-1;
    while(i<j){
        
        level=min(A[i],A[j]);
        if(abs(i-j)*level>max){
            max=abs(i-j)*level;
        }
        if(A[i]>A[j]){
            j--;
        }
        else{
            i++;
        }
        
        
        
    }
    return max;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends