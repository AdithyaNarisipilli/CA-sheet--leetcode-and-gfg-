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
            int count=0;
            for(long long i=1;i<=N;i++){
                if(abs(i-sumOfdigits(i))>=K){
                    count++;
                }
            }
            return count;
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