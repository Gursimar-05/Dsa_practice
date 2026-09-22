class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for (int i = 0; i < asteroids.size(); i++) {

            if (asteroids[i] > 0) {
                s.push(asteroids[i]);
                continue;
            }

            while (!s.empty() && s.top() > 0) {

                if (s.top() < abs(asteroids[i])) {
                    s.pop();
                }
                else if (s.top() == abs(asteroids[i])) {
                    s.pop();
                    asteroids[i] = 0;
                    break;
                }
                else {
                    asteroids[i] = 0;
                    break;
                }
            }

            if (asteroids[i] != 0) {
                s.push(asteroids[i]);
            }
        }

        vector<int> res;

        while (!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};