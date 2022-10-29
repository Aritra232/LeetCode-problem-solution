class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *tmp, *prv, *cur, *tmp1, *tmp2;
        int t;

        tmp = head;
        prv = new ListNode();
        prv->next = tmp;
        tmp1 = prv;
        cur = prv;
        tmp2 = prv;
        t = n;

        for(int i=1; i<=t; i++)
        {
            cur = cur->next;
        }

        while(cur->next!=nullptr)
        {
            tmp1 = tmp1->next;
            cur = cur->next;
            tmp2 = tmp2->next;
        }
        tmp2 = tmp1->next;

        tmp1->next = tmp1->next->next;

        delete tmp2;

        return prv->next;
    }
};
