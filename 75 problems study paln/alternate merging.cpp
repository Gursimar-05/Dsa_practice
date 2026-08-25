class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string merged;
    int flag = 0;
    int l = 0;

    if(word1.length() > word2.length()) {
        l = word2.length();
        flag = 1;
    }
    else {
        l = word1.length();
    }

    merged.resize(word1.length() + word2.length());

    for(int i = 0; i < l; i++) {
        merged[2*i] = word1[i];
        merged[2*i+1] = word2[i];
    }

    if(flag == 0) {
        for(int i = l; i < word2.length(); i++) {
            merged[2*l + i-l] = word2[i];
        }
    }
    else {
        for(int i = l; i < word1.length(); i++) {
            merged[2*l + i-l] = word1[i];
        }
    }

    return merged;
}

};