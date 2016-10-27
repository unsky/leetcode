/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 // Ê¹ÓÃµÝ¹é
class Solution {
public:
    int maxDepth(TreeNode* root) {
       
        int MaxLevel=0;
        if(!root) return MaxLevel;
        int LeftDepth=1;
        int RightDepth=1;
        MaxLevel=1;
        depth(root, MaxLevel,LeftDepth,RightDepth);
        return MaxLevel;
    }
    void depth(TreeNode* root, int & MaxLevel,int LeftDepth, int RightDepth)
    {
     if (!root) return;
//×¢Òâ×óÓÒ×ÓÊ÷µÄ»»²ã
     if (LeftDepth>RightDepth)
     RightDepth=LeftDepth;
     else
     LeftDepth=RightDepth;
     
     if(root->left)
     LeftDepth++;
     if(root->right)
     RightDepth++;
     if((LeftDepth>=RightDepth)&&(LeftDepth>=MaxLevel))
     MaxLevel=LeftDepth;
     if((RightDepth>=LeftDepth)&&(RightDepth>=MaxLevel))
     MaxLevel=RightDepth;
     if(root->left)
     depth(root->left,MaxLevel,LeftDepth,RightDepth);
      if(root->right)
     depth(root->right,MaxLevel,LeftDepth,RightDepth);
     
        
    }
    

    
    
};