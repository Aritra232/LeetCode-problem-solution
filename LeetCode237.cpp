class Solution
{
public:
    void deleteNode(ListNode* node)
    {
        ListNode *tmp;
        tmp = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete(tmp);

    }
};

