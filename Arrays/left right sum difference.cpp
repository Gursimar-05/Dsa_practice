class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum(nums.size());
        vector<int> rightsum(nums.size());
        vector<int> answer(nums.size());
        leftsum[0]=0;
        for(int i=1;i<nums.size();i++){
            leftsum[i]=nums[i-1]+leftsum[i-1];
        }
        rightsum[nums.size()-1]=0;
        for(int j= nums.size()-2;j>=0;j--){
            rightsum[j]=nums[j+1]+rightsum[j+1];

        }
        for(int k=0;k<nums.size();k++){
        answer[k]=abs(leftsum[k]-rightsum[k]);
        }

        return answer;
    }
};