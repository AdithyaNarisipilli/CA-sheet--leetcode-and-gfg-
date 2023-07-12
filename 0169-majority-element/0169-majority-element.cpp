class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int number=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                number=nums[i];
            }
            
            if(number==nums[i]){
                count++;
            }
            else{
                count--;
            }
            
        }
        return number;
    }
};