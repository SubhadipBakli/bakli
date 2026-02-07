class Solution {
public:
void helper(TreeNode* root, int val){
        if(root == NULL) return;

        if(root->val >val){
            if(root->left == NULL){
                TreeNode*temp = new TreeNode(val);
                root->left = temp;
                return;
            }
            else insertIntoBST(root->left,val);
        }
        else{
            if(root->right == NULL){
                TreeNode*temp = new TreeNode(val);
                root->right = temp;
                return;
            }
            else insertIntoBST(root->right,val);
        }
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            TreeNode*temp = new TreeNode(val);
            return temp;
        }

        helper(root,val);

        return root;

    }
};