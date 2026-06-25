class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set <int> seen;
        int n=0;
        for(int i:nums){
            seen.insert(i);
          } 
          while(n<=nums.size()){
            if(seen.find(n)==seen.end()){
            return n;
          }n++;
        }
        return 0;
    }
};