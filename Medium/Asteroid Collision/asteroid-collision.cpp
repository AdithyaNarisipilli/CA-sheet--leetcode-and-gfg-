//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        stack<int>s;
        
        for(int i=0;i<N;i++){
            if(asteroids[i]>0||s.empty()){
                s.push(asteroids[i]);
            }
            else{
                while(!s.empty()&&s.top()>0&&s.top()<abs(asteroids[i])){
                    s.pop();
                }
                if(!s.empty()&&s.top()==abs(asteroids[i])){
                    s.pop();
                }
                else{
                    if(s.empty()||s.top()<0){
                        s.push(asteroids[i]);
                    }
                }
            }
        }
        vector<int>ans(s.size(),0);
        for(int i=s.size()-1;i>=0;i--){
            ans[i]=s.top();
            s.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends