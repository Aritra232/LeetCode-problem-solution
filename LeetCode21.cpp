class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if(list1==nullptr)
        {
            return list2;
        }
        if(list2==nullptr)
        {
            return list1;
        }
        ListNode *head, *tmp;
        head = new ListNode;
        head->val = list2->val;
        head->next = list2->next;

        tmp = nullptr;
        if(list1->val < list2->val)
        {
            head->val = list1->val;
            list1 = list1->next;
        }
        else
        {
            list2 = list2->next;
        }

        tmp = head;
        while(list1!=nullptr && list2!=nullptr )
        {
            if(list1->val > list2->val)
            {
                tmp->next = list2;

                list2 = list2->next;
                tmp = tmp->next;
            }
            else
            {
                tmp->next = list1;

                list1 = list1->next;
                tmp = tmp->next;
            }

        }
        if(list2==nullptr)
        {
            tmp->next = list1;
        }
        else if(list1==nullptr)
        {
            tmp->next = list2;
        }
        return head;
    }
};
