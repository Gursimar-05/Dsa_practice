class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
        for(int r=s.size()-1;r>l;r--){
            int t;
            t=s[l];
            s[l]=s[r];
            s[r]=t;
            l++;
        }
    }
};