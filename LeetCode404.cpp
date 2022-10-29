class Solution
{
public:

    int p = 0;

    int sumOfLeftLeaves(TreeNode* root)
    {

        if(root!= nullptr)
        {

            sumOfLeftLeaves(root->left);

            if(root->left!=nullptr && root->left->left == nullptr && root->left->right==nullptr)
            {
                p = p + root->left->val;
            }

            sumOfLeftLeaves(root->right);
        }
        return p;
    }
};
