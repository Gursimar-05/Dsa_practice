#include<algorithm>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min=strs[0].size();
       for(int i=1;i<strs.size();i++){
        if(min>strs[i].size()){
          min=strs[i].size();
        }
       }
       int count=0;
       for(int j=0;j<min;j++){
        for(int i=0;i<strs.size()-1;i++){
            if( strs[i][j]==strs[1+i][j]){
                continue;
            }else{
                return strs[0].substr(0,count);
            }
        }
        count++;
       }
        return strs[0].substr(0,count);
   }
};