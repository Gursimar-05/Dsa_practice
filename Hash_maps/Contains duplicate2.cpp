class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n=0;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])==0){
                mp[nums[i]]=n;
                n++;
            }else{
                if(abs(i-mp[nums[i]]<=k)){
                    return true;
                }else{
                    mp[nums[i]]=i;
                    n++;
                }
            }
        }
        return false;
    }
};