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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root)
       return result;
       Traversal(root,1,result);
       return result;

    }
     void Traversal(TreeNode* root,int level,vector<vector<int>> &result ) {
      if(!root) return;
      if (result.size()==level-1)
      result.push_back(vector<int> ());% �ڶ��еĳ��ȺͲ�����ȵ�ʱ����Ҫ����յĶ��У��Ա��������
      result[level-1].push_back(root->val);
      if(root->left) 
       Traversal(root->left, level+1,result);
     if(root->right) 
        Traversal(root->right,level+1,result);
     
     }
};