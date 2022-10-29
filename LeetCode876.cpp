class Solution
{
public:
    ListNode* middleNode(ListNode* head)
    {
        ListNode *prv, *tmp, *curr;
        if(head == nullptr)
        {
            return nullptr;
        }

        prv = nullptr;
        curr = head;
        tmp = head;

        while(tmp!=nullptr && tmp->next!=nullptr)
        {
            curr = curr->next;
            tmp = tmp->next->next;
        }
        return curr;

    }
};
