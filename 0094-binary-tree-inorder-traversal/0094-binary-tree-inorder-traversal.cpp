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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root,result);
        return result;
    }
            
        void preorder(TreeNode* node, vector<int>& result) {
        if (node == NULL) return;
        preorder(node->left, result);  
        result.push_back(node->val);
        preorder(node->right, result); 
    
        
    
        
    }
};