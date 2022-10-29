class Solution
{
public:

    TreeNode* insertIntoBST(TreeNode* root, int val)
    {
        TreeNode *tmp = root;
        if(root==nullptr)
        {
            return new TreeNode(val);
        }
        while(tmp!=nullptr)
        {
            if(tmp->val > val )
            {
                if(tmp->left!=nullptr)
                {
                    tmp = tmp->left;
                }
                else
                {
                    tmp->left = new TreeNode(val);
                    break;
                }
            }
            else
            {
                if(tmp->right!=nullptr)
                {
                    tmp = tmp->right;
                }
                else
                {
                    tmp->right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;

    }
};
