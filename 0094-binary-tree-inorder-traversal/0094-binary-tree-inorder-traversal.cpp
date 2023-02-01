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
    void inorderTraversalRecursive(TreeNode* root, vector<int> &v)
    {
        if(root->left != NULL) inorderTraversalRecursive(root->left, v);
        if(root != NULL) v.push_back(root->val);
        if(root->right != NULL) inorderTraversalRecursive(root->right, v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root != NULL) inorderTraversalRecursive(root, v);
        return v;
    }
};