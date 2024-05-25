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
// TC=O(logn)
// SC=O(h)
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode * newNode=new TreeNode(val);
            return newNode;             
        }
        
        if(root->val>val)
        {
            root->left=insertIntoBST(root->left,val);
        }
        else
        {
            root->right=insertIntoBST(root->right,val);
        }
        
        return root;
    }
};