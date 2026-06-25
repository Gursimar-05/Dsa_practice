class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> mp1;
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        int i=0;
        if(pattern.size() !=words.size()){
            return false;
        }
        for(int c=0;c<pattern.size();c++){
            if(mp.count(pattern[c])==0 && mp1.count(words[c])==0){
                mp[pattern[c]]=words[c];
                mp1[words[c]]=pattern[c];
            }else{
                if(mp[pattern[c]]==words[c] && mp1[words[c]]==pattern[c]){
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};