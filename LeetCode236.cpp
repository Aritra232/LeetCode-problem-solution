class Solution
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        TreeNode *lt, *rt;

        if(root==nullptr)
        {
            return nullptr;
        }
        if(root->val == p->val || root->val == q->val)
        {
            return root;
        }

        lt = lowestCommonAncestor(root->left,  p,  q);
        rt = lowestCommonAncestor(root->right,  p,  q);

        if(rt==nullptr)
        {
            return lt;
        }
        else if(lt==nullptr)
        {
            return rt;
        }
        else if(left!=nullptr && right!=nullptr)
        {
            return root;
        }
    }
};
