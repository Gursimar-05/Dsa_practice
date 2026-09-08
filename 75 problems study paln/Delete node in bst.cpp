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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        // Key not found
        if (root == NULL) {
            return NULL;
        }

        // Search in left subtree
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }

        // Search in right subtree
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        // Node found
        else {
            // No left child
            if (root->left == NULL) {
                return root->right;
            }

            // No right child
            if (root->right == NULL) {
                return root->left;
            }

            // Two children
            TreeNode* temp = root->right;

            // Find smallest node in right subtree
            while (temp->left != NULL) {
                temp = temp->left;
            }

            // Replace current node's value
            root->val = temp->val;

            // Delete the duplicate node
            root->right = deleteNode(root->right, temp->val);
        }

        return root;
    }
};