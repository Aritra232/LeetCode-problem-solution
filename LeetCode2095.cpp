class Solution
{
public:
    ListNode* deleteMiddle(ListNode* head)
    {
        ListNode *prv, *tmp, *curr;
        if(head->next == nullptr)
        {
            return nullptr;
        }
        prv = nullptr;
        curr = head;
        tmp = head;

        while(tmp!=nullptr && tmp->next!=nullptr)
        {
            prv = curr;
            curr = curr->next;
            tmp = tmp->next->next;
        }

        prv->next = curr->next;
        delete curr;
        return head;
    }
};
