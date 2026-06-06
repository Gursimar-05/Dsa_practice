class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                k++;
            } else continue;
        }
        for(int j=0;j<k;j++){
            nums.push_back(0);
        }
        
    }
};