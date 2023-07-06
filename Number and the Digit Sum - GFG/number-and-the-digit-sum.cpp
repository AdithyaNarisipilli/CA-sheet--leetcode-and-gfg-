//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int sumOfdigits(int n){
            int sum=0;
            while(n!=0){
                int a=n%10;
                n=n/10;
                sum+=a;
            }
            return sum;
        }
        long long int numberCount(long long int N, long long int K)
        {
            long long int low=1;
            long long int high=N;
            while(low<=high){
                long long int mid=low+(high-low)/2;
                if((mid-sumOfdigits(mid))<K&&((mid+1)-sumOfdigits(mid+1))>=K){
                    return N-mid;
                }
                if((mid-sumOfdigits(mid))<K){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return 0;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends