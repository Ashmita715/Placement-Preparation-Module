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
    TreeNode* helper(TreeNode* root,int v,int d,int count)
    {
        if(root==NULL)
        {
            return root;
        }
        if(count==(d-1))
        {
            TreeNode* leftNode=new TreeNode(v);
            TreeNode* rightNode=new TreeNode(v);
            leftNode->left=root->left;
            rightNode->right=root->right;
            root->left=leftNode;
            root->right=rightNode;
            return root;
        }
        root->left=helper(root->left,v,d,count+1);
        root->right=helper(root->right,v,d,count+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        return helper(root,val,depth,1);
        return root;
    }
};