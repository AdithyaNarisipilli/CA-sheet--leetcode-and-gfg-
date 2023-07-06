class Solution {
public:
bool isArithmetic(vector<int>&v){
    if(v.size()==2){
        return true;
    }
    sort(v.begin(),v.end());
    int diff=v[1]-v[0];
    for(int i=2;i<v.size();i++){
        if(v[i]-v[i-1]!=diff){
            return false;
        }
    }
    return true;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums,vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool>ans;
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=l[i];j<=r[i];j++){
                v.push_back(nums[j]);
            }
            if(isArithmetic(v)){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            
        }
        return ans;
    }
};