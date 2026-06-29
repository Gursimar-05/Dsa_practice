class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <int> seen;
        int res=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            while(seen.count(s[right])!=0){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            res=max(res,right-left+1);
        }
        return res;
    }
};