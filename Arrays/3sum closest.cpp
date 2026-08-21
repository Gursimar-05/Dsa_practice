class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) { 
        int start=0;
        int ans,i=1;
        int closest=100000;
        int count=0;
        while(start<i){
             i=start+1;
        for(i=start+1;i<nums.size()-1;i++){
             int end=nums.size()-1;
            while(end>i){
              int sum=nums[start]+nums[i]+nums[end];
              int diff=abs(target-sum);
              if(closest>diff){
                closest=diff;
                 ans=sum;
              }
              sum=0;
              diff=0;
              end--;
            }  
        }
         start++;
        }
        return ans;
    }
};