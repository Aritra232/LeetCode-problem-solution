class Solution
{
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        int t;

        ListNode *tmp, *cur, *prv=nullptr;

        if(head == nullptr)
        {
            return nullptr;
        }


        t = val;

        tmp = head;

        while(tmp!=nullptr)
        {

            if(tmp->val == t)
            {
                if(head->val == t)
                {
                    head = tmp->next;
                    tmp = tmp->next;
                }
                else
                {
                    prv->next = tmp->next;
                    tmp = tmp->next;
                }
            }
            else
            {
                prv = tmp;
                tmp = tmp->next;
            }

        }
        return head;
    }
};
