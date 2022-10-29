class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *tmp1, *tmp2, *q;

        tmp1 = headA;
        tmp2 = headB;

        while(tmp1 != tmp2)
        {

            if(tmp1 != nullptr)
            {
                tmp1 = tmp1->next;
            }
            if(tmp2 != nullptr)
            {
                tmp2 = tmp2->next;
            }
            if(tmp1 == tmp2)
            {
                return tmp1;
            }

            if (tmp1 == nullptr)
            {
                tmp1 = headA;
            }

            if (tmp2 == nullptr)
            {
                tmp2 = headB;
            }

        }

        return tmp2;

    }
};
