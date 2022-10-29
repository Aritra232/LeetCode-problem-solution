class Solution
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        bool e, w;

        if(p==nullptr && q==nullptr)
        {
            return true;
        }
        if(p==nullptr || q==nullptr)
        {
            return false;
        }

        if(p->val != q->val)
        {
            return false;
        }

        else
        {
            e = isSameTree(p->right,q->right);

            w = isSameTree(p->left,q->left) ;

            return e && w;
        }

    }
};
