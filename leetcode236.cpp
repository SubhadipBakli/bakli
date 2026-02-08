class Solution {
public:
bool helper(TreeNode* root,TreeNode* target){

    if(root ==  NULL) return false;
    if(root == target ) return true;
bool a = helper(root->left,target); if(a==true) return true; bool b= helper(root->right,target); if(b==true) return true; return false;
}

  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  if (root == NULL) return NULL;
    if(helper(root->left,p) && helper(root->left,q)){
        return lowestCommonAncestor(root->left,p,q);
    }
    if(helper(root->right,p) && helper(root->right,q)){
        return lowestCommonAncestor(root->right,p,q);
    }

    return root;
    }
};