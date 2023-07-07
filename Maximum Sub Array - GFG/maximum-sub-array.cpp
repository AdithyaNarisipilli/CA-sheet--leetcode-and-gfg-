//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    //we will use kadane algorithm here
	    pair<int,int>p;
	    int sum=0;
	    int max=0;
	    int start=0;
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            start=i+1;
	            sum=0;
	            continue;
	        }
	        sum+=a[i];
	        if(sum>max){
	           max=sum;
	           p={start,i};
	        }
	        else if(sum==max){
	            if((i-start)>(p.second-p.first)){
	                p={start,i};
	            }
	        }
	    }
	    vector<int>v;
	    for(int i=p.first;i<=p.second;i++){
	        v.push_back(a[i]);
	    }
	    if(v.size()==0)return {-1};
	    return v;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends