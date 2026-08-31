class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
       int n=nums.size();
       int count=0;
       for(int i=0;i<n;i++){
          int a=k-nums[i];
          if(mp[a]>0){
             count++;
             mp[a]--;
          }else{
            mp[nums[i]]++;
          }
       }
       return count;
    }
};