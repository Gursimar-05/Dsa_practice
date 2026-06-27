class Solution {
public:
    int firstUniqChar(string s) {
      unordered_map <char,int> mp;
      for(char c:s){
        mp[c]++;
      }
      int n=0;
      for(char c:s){
        if(mp[c]==1){
            return n;
        }else{
            n++;
        }
      }
      return -1;
    }
};