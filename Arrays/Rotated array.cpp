class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,n=0;
        for(int i=s+1;i<nums.size();i++){
            if(nums[s]<nums[i]){
                s++;
            } else{
                n=s;
                break;
            }
        }
        int left=0;
        int right=nums.size()-1;
        if(n!=0){
            if(target>nums[right]){
                right =n;
            }else{
                left=n+1;
            }
        }
         for(int i=left;i<=right;i++){
            if(nums[i]==target){
                return i;
            }
         }    
 return -1;
    }
};