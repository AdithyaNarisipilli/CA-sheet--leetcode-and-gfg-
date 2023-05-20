//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int num0s = 0, num1s=0,num2s=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                num0s+=1;
            }
            if(a[i]==1){
                num1s+=1;
            }
            if(a[i]==2){
                num2s+=1;
            }
            
        }
        int i=0;
        for(;i<num0s;i++){
            a[i]=0;
        }
        for(;i<num0s+num1s;i++){
            a[i]=1;
        }
        for(;i<num0s+num1s+num2s;i++){
            a[i]=2;
        }
    }
        
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends