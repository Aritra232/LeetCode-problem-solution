class Solution
{
public:

    int key(TreeNode* root,int q)
    {
        if(root==nullptr)
        {
            return true;
        }

        if(q!=root->val)
        {
            return 0;
        }

        int w = key(root->left,q);

        int a =  key(root->right,q);

        return w && a;

    }
    bool isUnivalTree(TreeNode* root)
    {
        if(root == nullptr)
        {
            return true;
        }
        int p = root->val;
        int a = key(root,p);
        if(a==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
