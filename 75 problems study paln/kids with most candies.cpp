class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
     for(int i=0;i<candies.size();i++){
        int ans=0;
        for(int j=0;j<candies.size();j++){
        if(j==i){
            continue;
        }
        if(candies[i]+extraCandies>=candies[j]){
        }else{
            ans=1;
            break;
        }
        }
        if(ans==0){
            result.push_back(true);
        }else{
        result.push_back(false);
        }
     }   
     return result;
    }
};