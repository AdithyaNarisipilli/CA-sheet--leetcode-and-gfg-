//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++
void countsort(int arr[],int place,int n){
    int res[10]={0};
    for(int i=0;i<n;i++){
        res[(arr[i]/place)%10]++;
    }
    for(int i=1;i<10;i++){
        res[i]=res[i-1]+res[i];
    }
    int temp[n];
    for(int i=n-1;i>=0;i--){
        temp[res[(arr[i]/place)%10]-1]=arr[i];
        res[(arr[i]/place)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
void radixSort(int arr[], int n) 
{ 
    int maxi=INT_MIN;
   for(int i=0;i<n;i++){
      maxi=max(maxi,arr[i]); 
   }
   
   for(int place=1;maxi/place>=1;place*=10){
       countsort(arr,place,n);
   }
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends