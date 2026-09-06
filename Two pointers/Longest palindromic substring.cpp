class Solution {
public:
    string longestPalindrome(string s) {
        int l=0;
        int r=0;
        int max=1;
        int start=0;
        if(s.size()==1){
            return s;
        }
        for(int i=0;i<s.size();i++){
            l=i;
            r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>max){
                    start=l;
                    max=r-l+1;
                }
                l--;
                r++;
            }
             l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>max){
                    start=l;
                    max=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(start,max);
    }
};