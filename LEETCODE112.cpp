class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        if (!root) return false;
        if (!root->left && !root->right) return target == root->val;
        return hasPathSum(root->left, target - root->val) || hasPathSum(root->right, target - root->val);
    }
};