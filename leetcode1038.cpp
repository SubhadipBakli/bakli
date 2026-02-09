class Solution {
public:
void helper(TreeNode*root,int& n){
    if(root == NULL){
        return;
    }

    helper(root->right,n);
    n+=root->val;
    root->val = n;
    helper(root->left,n);

}
    TreeNode* bstToGst(TreeNode* root) {
        int n = 0;
        helper(root->right,n);
        n+=root->val;
        root->val=n;
        helper(root->left,n);
        return root;

    }
};