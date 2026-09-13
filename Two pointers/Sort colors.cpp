class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        while(l<nums.size()){
             int r=nums.size()-1;
        while(r>l){
            if(nums[l]>nums[r]){
                int temp;
                temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
            }
            r--;
        }
        l++;
      }     
    }
};