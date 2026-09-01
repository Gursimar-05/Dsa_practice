class Solution {
public:
    int maxVowels(string s, int k) {
        char vow[] = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < 5; j++) {
                if (s[i] == vow[j]) {
                    count++;
                    break;
                }
            }
        }
        int maxCount = count;
        for (int right = k; right < s.size(); right++) {
            for (int j = 0; j < 5; j++) {
                if (s[right - k] == vow[j]) {
                    count--;
                    break;
                }
            }
            for (int j = 0; j < 5; j++) {
                if (s[right] == vow[j]) {
                    count++;
                    break;
                }
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};