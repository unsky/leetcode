/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root)   
    {  
        if (!root) return true;  
        return isSym(root->left,root->right);
    }  
  bool isSym(TreeNode *le, TreeNode *ri)
  {
      if (!le&&!ri) return true;
      if((!le&&ri)||(le&&!ri)||(le->val!=ri->val)) return false;
      return isSym(le->left,ri->right)&&isSym(le->right,ri->left);
  }
};