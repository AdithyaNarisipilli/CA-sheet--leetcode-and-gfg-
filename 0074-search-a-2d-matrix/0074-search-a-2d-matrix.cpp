class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){
            return false;
        }
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=m*n;
        int mid;     
        while(low<high){
         mid=low+(high-low)/2;
         int i=mid/n;
         int j=mid%n;
         if(matrix[i][j]==target){
             return true;
         }
         else if(matrix[i][j]<target){
             low=mid+1;
         }
         else{
             high=mid;
         }
        }
        return false;
    }
};