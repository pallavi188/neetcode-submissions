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
    int height(TreeNode* root){
        if(!root)return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh,rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int l =height(root->left);
        int r = height(root->right);
       int d1 = l+r;
       int d2 = diameterOfBinaryTree(root->left);
       int d3 = diameterOfBinaryTree(root->right);
       return max(d1,max(d2,d3));
    }
};
