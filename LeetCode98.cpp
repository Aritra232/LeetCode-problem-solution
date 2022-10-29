class Solution
{
public:
    TreeNode *tmp = nullptr;
    bool isValidBST(TreeNode* root)
    {

        if(root == nullptr)
        {
            return true;
        }

        if(isValidBST(root->left)==false)
        {
            return false;
        }

        if(tmp != nullptr && root->val <= tmp->val)
        {
            return false;
        }

        tmp  = root;

        if(isValidBST(root->right)==false)
        {
            return false;
        }
        return true;

    }
};

