//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  vector<int> leastPrimeFactor(int n)
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        int isprime=1;

        if (i % 2 == 0)
        {
            v.push_back(2);
        }
        else
        {
            if (i >= 9){
                for (int j = 3; j * j <= i; j += 2)
                {
                    if (i % j == 0)
                    {
                        isprime=0;
                        v.push_back(j);
                        break;
                    }
                }
                if(isprime){
                    v.push_back(i);
                }
            }
            else
            {
                for (int j = 3; j <= i; j += 2)
                {
                    if (i % j == 0)
                    {
                        v.push_back(j);
                        break;
                    }
                }
            }
        }
    }
    return v;
}
   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends