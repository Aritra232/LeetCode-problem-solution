class Solution
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root == nullptr)
        {
            return nullptr;
        }
        if(root->val > p->val && root->val > q->val )
        {
            TreeNode *left = lowestCommonAncestor(root->left, p, q);
            return left;
        }

        if(root->val < p->val && root->val < q->val )
        {
            TreeNode *right = lowestCommonAncestor(root->right, p, q);
            return right;
        }

        else
        {
            return root;
        }
    }
};
