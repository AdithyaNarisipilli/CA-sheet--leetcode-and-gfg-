//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<N1;i++) sum1+=S1[i];
        for(int i=0;i<N2;i++) sum2+=S2[i];
        for(int i=0;i<N3;i++) sum3+=S3[i];
        int a=0,b=0,c=0;
        int ans;
        while(true){
            if(a==N1 or b==N2 or c==N3){
                ans=0;
                break;
            }
            else if(sum3==sum2&&sum2==sum1){
                ans=sum1;
                break;
            }
            else if(sum1>=sum2&&sum1>=sum3){
                sum1-=S1[a];a++;
            }
            else if(sum2>=sum3&&sum2>=sum1){
                sum2-=S2[b];b++;
            }
            else if(sum3>=sum1&&sum3>=sum2){
                sum3-=S3[c];c++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends