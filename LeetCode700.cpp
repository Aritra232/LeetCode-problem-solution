class Solution
{
public:
    TreeNode* searchBST(TreeNode* root, int val)
    {
        if(root == nullptr)
        {
            return nullptr;
        }
        while(root!=nullptr)
        {
            if(root->val == val)
            {
                return root;
            }
            if(root->val < val)
            {
                root = root->right;
            }
            else if(root->val > val)
            {
                root = root->left;

            }
        }
        return root;
    }
};
