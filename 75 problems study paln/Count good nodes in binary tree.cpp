class Solution {
public:
    int goodNodes(TreeNode* root) {
        return dfs(root, INT_MIN);
    }

    int dfs(TreeNode* root, int maxSoFar) {
        if (root == NULL)
            return 0;

        int count = 0;

        if (root->val >= maxSoFar) {
            count = 1;
        }

        maxSoFar = max(maxSoFar, root->val);

        count += dfs(root->left, maxSoFar);
        count += dfs(root->right, maxSoFar);

        return count;
    }
};