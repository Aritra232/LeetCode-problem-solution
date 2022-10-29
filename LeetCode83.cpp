class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *tmp;
        if(head == nullptr)
        {
            return nullptr;
        }
        else
        {
            tmp = head;

            while(tmp->next!=nullptr)
            {

                if(tmp->val == tmp->next->val)
                {
                    tmp->next = tmp->next->next;
                }
                else
                {
                    tmp = tmp->next;
                }
            }
        }
        return head;
    }
};
