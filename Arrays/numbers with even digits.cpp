class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int k=nums[i];
            do{
               k=k/10;
               count++;
            }while(k !=0);
         
         if(count%2 == 0){
            digits++;
         }
        
    }
    
    return digits;
    }
};