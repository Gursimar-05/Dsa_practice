class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // Add original index.
        vector<array<long long, 4>> a;
        for (int i = 0; i < n; ++i) {
            a.push_back({
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            });
        }

        // Sort by start time.
        sort(a.begin(), a.end());

        // next[i] = first interval whose start > a[i].end
        vector<int> nxt(n);
        for (int i = 0; i < n; ++i) {
            long long end = a[i][1];

            int lo = i + 1, hi = n;
            while (lo < hi) {
                int mid = lo + (hi - lo) / 2;
                if (a[mid][0] > end)
                    hi = mid;
                else
                    lo = mid + 1;
            }
            nxt[i] = lo;
        }

        struct State {
            long long score = 0;
            vector<int> ids;
        };

        auto better = [](const State& x, const State& y) {
            if (x.score != y.score)
                return x.score > y.score;
            return x.ids < y.ids;
        };

        // dp[i][k] = best answer using intervals i..n-1,
        // selecting at most k intervals.
        vector<vector<State>> dp(n + 1, vector<State>(5));

        for (int i = n - 1; i >= 0; --i) {
            for (int k = 1; k <= 4; ++k) {
                // Option 1: skip interval i
                State skip = dp[i + 1][k];

                // Option 2: take interval i
                State take = dp[nxt[i]][k - 1];
                take.score += a[i][2];
                take.ids.push_back((int)a[i][3]);
                sort(take.ids.begin(), take.ids.end());

                dp[i][k] = better(take, skip) ? take : skip;
            }
        }

        return dp[0][4].ids;
    }
};