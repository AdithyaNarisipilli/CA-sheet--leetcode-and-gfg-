//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    if(S1.length()!=S2.length()){
        return false;
    }
    int count=0;
    vector<int>v;
    for(int i=0;i<S1.length();i++){
        if(S1[i]!=S2[i]){
            count++;
            v.push_back(i);
        }
    }
    if(count!=2){
        return false;
    }
    swap(S1[v[0]],S1[v[1]]);
    return S1==S2;
}