class Solution {
public:
    string reverseVowels(string s) {
        char vowels[]={'a','e','i','o','u'};
        int start=0;
        int end=s.size()-1;
        while(start<end){
            int flag=0;
            for(int j=0;j<5;j++){
                if(tolower(s[start])==vowels[j]){
                   flag=1;
                }
            } 
            if(flag==0){
            start++;
            continue;
            }
            flag=0;
             for(int j=0;j<5;j++){
                if(tolower(s[end])==vowels[j]){
                   flag=1;
                }
            } 
            if(flag==0){
            end--;
            continue;
            }
            char temp;
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
            
        }
        return s;
    }
};