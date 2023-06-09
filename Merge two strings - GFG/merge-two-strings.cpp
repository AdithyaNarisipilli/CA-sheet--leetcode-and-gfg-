//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    int n=S1.length()+S2.length();
    int a=S1.length();
    int b=S2.length();
    string s="";
    int i=0,j=0;
    for(int k=0;k<n;k++){
        if(i<a){
            s+=S1[i];
        }
        if(j<b){
            s+=S2[j];
        }
        i++;
        j++;
    }
    return s;
    
}