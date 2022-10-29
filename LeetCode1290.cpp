class Solution
{
public:
    int getDecimalValue(ListNode* head)
    {
        int w = 0;
        ListNode *tmp;

        if(head == nullptr)
        {
            return w;
        }

        tmp = head;
        while(tmp!=nullptr)
        {
            w = w*2;
            w = w + (tmp->val);
            tmp = tmp->next;
        }
        return w;
    }
};
