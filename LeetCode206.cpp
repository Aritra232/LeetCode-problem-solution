class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode *prev, *cur, *next;
        if(head == nullptr)
        {
            return nullptr;
        }
        else
        {

            cur = head;
            prev = nullptr;
            next = nullptr;

            while(cur != nullptr)
            {
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
        }
        head = prev;
        return head;
    }
};
