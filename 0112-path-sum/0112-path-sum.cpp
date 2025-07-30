class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;

        // If it's a leaf node
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }

        // Subtract current node value from target and check subtrees
        int remainingSum = targetSum - root->val;

        return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
    }
};
