class Solution
{
public:

    TreeNode *fnode = new TreeNode;
    TreeNode  *cur = fnode;

    TreeNode* increasingBST(TreeNode* root)
    {

        if(root == nullptr)
        {
            return nullptr;
        }

        increasingBST(root->left);
        root->left = nullptr;

        cur->right = new TreeNode(root->val);
        cur = cur->right;
        increasingBST(root->right);

        return fnode->right;

    }
};
