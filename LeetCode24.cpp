class Solution
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        ListNode *cur;
        int a;
        cur = head;

        while(cur!=nullptr && cur->next!=nullptr)
        {
            a = cur->val;
            cur->val = cur->next->val;
            cur->next->val = a;
            cur = cur->next->next;
        }

        return head;

    }
};
