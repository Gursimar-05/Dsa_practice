class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        for(int i=0;i<candies.size();i++){
            result[i]=true;
            for(int j=0;j<candies.size();j++){
                if(candies[i]+extraCandies < candies[j]){
                    result[i]=false;
                }
            }
        }
        return result;
    }
};