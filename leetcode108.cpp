class Solution {
public:

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return NULL;

        TreeNode* root = new TreeNode(nums[n/2]);
        vector<int>l;
        vector<int>r;
        for(int i=0;i<n/2;i++) l.push_back(nums[i]);
        for(int i=n/2+1;i<n;i++) r.push_back(nums[i]);

            root->left =sortedArrayToBST(l);
            root->right=sortedArrayToBST(r);

            return root;
    }
};