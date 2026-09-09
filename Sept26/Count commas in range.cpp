class Solution {
public:
    int countCommas(long long n) {
        int count = 0;

        for (long long i = 1000; i <= n; i *= 1000) {
            count += (n - i + 1);
            
            if (i > n / 1000)
                break;
        }

        return count;
    }
};