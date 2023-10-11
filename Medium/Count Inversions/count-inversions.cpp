//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[],long long low,long long mid,long long high){
        long long left=low,right=mid+1;
        long long temp[high-low+1];
        long long k=0;
        long long count=0;
        while(left<=mid&&right<=high){
            if(arr[left]<=arr[right]){
                temp[k++]=arr[left];
                left++;
            }
            else{
                temp[k++]=arr[right];
                count+=(mid-left+1);
                right++;
            }
        }
        while(left<=mid){
            temp[k++]=arr[left];
            left++;
        }
        while(right<=high){
            temp[k++]=arr[right];
            right++;
        }
        for(long long i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        return count;
    }
    long long mergesort(long long arr[],long long low,long long high){
        if(low>=high){
            return 0;
        }
        long long count=0;
        long long mid=low+(high-low)/2;
        count+=mergesort(arr,low,mid);
        count+=mergesort(arr,mid+1,high);
        count+=merge(arr,low,mid,high);
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        //for this problem we have to use mergesort algo and try to count no of inversions
        return (long long int)mergesort(arr,0,N-1);
        
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends