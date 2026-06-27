class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int j=0;
            while(j<nums2.size()){
            if(nums1[i]==nums2[j]){
                res.push_back(nums2[j]);
                nums2.erase(nums2.begin()+j);
                break;
            }else{
                j++;
            }
            }
        }
        return res;

    }
};