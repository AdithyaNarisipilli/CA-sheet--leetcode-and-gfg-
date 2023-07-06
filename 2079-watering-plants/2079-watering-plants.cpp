class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int waterleft=capacity;
        int steps=0;
        for(int i=0;i<n;i++){
            if(waterleft>=plants[i]){
                waterleft-=plants[i];
                steps++;
            }

            else{
                steps+=(i);
                waterleft=capacity;
                steps+=(i+1);
                waterleft-=plants[i];

                
            }
        }
        return steps;
    }
};