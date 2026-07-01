/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode *temp = dummyNode;
        ListNode *dup = temp->next;
        while (dup != NULL)
        {
            if ((dup->next == NULL) || (dup->val != dup->next->val))
            {
                temp = temp->next;
                dup = dup->next;
            }
            else
            {
                while (dup->next != NULL && dup->val == dup->next->val)
                {
                    dup = dup->next;
                }
                dup = dup->next;
                temp->next = dup;
            }
        }
        ListNode *newHead = dummyNode->next;
        delete (dummyNode);
        return newHead;
    }
};