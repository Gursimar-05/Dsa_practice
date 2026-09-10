/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    // returns {sum of subtree, number of nodes in subtree}
    pair<int, int> dfs(TreeNode* root, int &ans) {

        if (root == NULL)
            return {0, 0};

        // First calculate left and right subtrees
        pair<int, int> left = dfs(root->left, ans);
        pair<int, int> right = dfs(root->right, ans);

        // Calculate sum of current subtree
        int sum = root->val + left.first + right.first;

        // Calculate number of nodes in current subtree
        int count = 1 + left.second + right.second;

        // Integer division = floor
        int average = sum / count;

        if (average == root->val)
            ans++;

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {

        int ans = 0;

        dfs(root, ans);

        return ans;
    }
};