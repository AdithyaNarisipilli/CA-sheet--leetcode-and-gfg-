//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool comp(pair<int,int>&a , pair<int,int>&b)
    {
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first>b.first;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<pair<int,int>>vp;
        for(auto it:mpp){
            vp.push_back({it.second,it.first});
        }
        sort(vp.begin(),vp.end(),comp);
        // reverse(vp.begin(),vp.end());
        vector<int>a;
        for(int i=0;i<vp.size();i++)
        {
            while(vp[i].first--)
            {
                a.push_back(vp[i].second);
            }
        }
        return a;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends