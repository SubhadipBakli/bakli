class Solution {
public:

    void helper(TreeNode* p, TreeNode* q,bool& b) {
        if(p==NULL && q==NULL ) return;
        if(p==NULL && q!=NULL || p!=NULL && q==NULL) {
            b=false;
            return;
        }
      if(b==false) return ;

        if (p->val != q->val) {
            b = false;
            return;
        }
      if(p->left!=NULL && q->left!=NULL){
        helper(p->left,q->left,b);
      }
      else if(p->left==NULL && q->left==NULL){

      }
      else {
        b=false;
        return;
      }

      if(p->right!=NULL && q->right!=NULL){
        helper(p->right,q->right,b);
      }
      else if(p->right==NULL && q->right==NULL){

      }
      else {
        b=false;
        return;
      }
      
     
    
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        bool b= true;
    helper(p,q,b);
    return b;
    }
};