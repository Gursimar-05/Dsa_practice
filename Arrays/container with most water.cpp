class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max_water=0;
        while(i<j){
             int maxarea = (j-i)*min(height[i],height[j]);
             max_water=max(maxarea,max_water);
             if(height[i]>height[j]){
                j--;
             }else{
                i++;
             }
        }
        return max_water;
    }
};