class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string result = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else if(!word.empty()){
                if(result.empty()){
                    result = word;
                }
                else{
                    result = word + " " + result;
                }

                word = "";
            }
        }

        if(!word.empty()){
            if(result.empty()){
                result = word;
            }
            else{
                result = word + " " + result;
            }
        }

        return result;
    }
};