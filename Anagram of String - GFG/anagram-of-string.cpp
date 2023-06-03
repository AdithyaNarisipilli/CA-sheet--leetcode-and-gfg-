//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    int m=str1.length();
    int n=str2.length();
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int ans=0;
    int i=0,j=0;
    int maxnum=max(m,n);
    while(i<m&&j<n){
        if(str1[i]==str2[j]){
            i++;
            j++;
            ans++;
        }
        else if(str1[i]>str2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return m+n-2*ans;
}