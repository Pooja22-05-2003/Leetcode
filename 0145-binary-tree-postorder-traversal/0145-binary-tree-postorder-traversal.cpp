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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int>res;
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        
        st1.push(root);
        while(!st1.empty())
        {
            auto curr=st1.top();
            st1.pop();
            st2.push(curr);
            if(curr->left) st1.push(curr->left);
            if(curr->right) st1.push(curr->right);
        }
        
        while(st2.size()>0)
        {
            res.push_back(st2.top()->val);
            st2.pop();
        }
        
        return res;
    }
};