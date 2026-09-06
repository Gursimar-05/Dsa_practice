class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int a=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                 a=i-1;
                 break;
            }

        }
        if(a==-1){
            reverse(nums.begin(),nums.end());
        }else{
        int n=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[a]){
                n=i;
                break;
            }
        }
        int temp=nums[a];
        nums[a]=nums[n];
        nums[n]=temp;
       int l=a+1;
       int r=nums.size()-1;
       while(l<r){
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;
       }
        }
    }
};