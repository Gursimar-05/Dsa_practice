class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++){
            ans.push_back(gain[i]+ans[i]);
        }
        int res=0;
        for(int i=0;i<ans.size();i++){
           if(res<ans[i]){
               res=ans[i];
           }
        }
        return res;
    }
};