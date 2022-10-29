class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *curr, *tmp;
        curr = head;
        tmp = head;

        while(tmp!=nullptr && tmp->next!=nullptr)
        {
            curr = curr->next;
            tmp = tmp->next->next;

            if(curr == tmp)
            {
                return true;
            }
        }
        return false;
    }
};
