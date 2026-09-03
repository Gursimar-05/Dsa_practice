class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int maxSum = INT_MIN;
        int ans = 1;
        int level = 0;

        while (!q.empty()) {
            level++;
            int sum = 0;

            int n = q.size();

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            if (sum > maxSum) {
                maxSum = sum;
                ans = level;
            }
        }

        return ans;
    }
};