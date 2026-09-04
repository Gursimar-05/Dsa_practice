class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> mp;
        mp[0] = 1;

        return dfs(root, 0, targetSum, mp);
    }

    int dfs(TreeNode* root, long long currSum, int targetSum,
            unordered_map<long long, int>& mp) {

        if (root == NULL)
            return 0;

        currSum += root->val;

        int count = mp[currSum - targetSum];

        mp[currSum]++;

        count += dfs(root->left, currSum, targetSum, mp);
        count += dfs(root->right, currSum, targetSum, mp);

        mp[currSum]--;

        return count;
    }
};