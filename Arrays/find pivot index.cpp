class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    vector<int> sumleft(nums.size());
    vector<int> sumright(nums.size());
        sumleft[0]=0;
        for (int i=1;i<nums.size();i++){
            sumleft[i]=nums[i-1]+sumleft[i-1];
        }
        sumright[nums.size()-1] = 0;
        for(int j=nums.size()-2;j>=0;j--){
            sumright[j]=nums[j+1]+sumright[j+1];
        }
        for(int k=0;k<nums.size();k++){
            if(sumleft[k]== sumright[k]){
                return k;
            }
            }
            return -1;

        }

};