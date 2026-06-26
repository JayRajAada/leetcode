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
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *curr = head;
        ListNode *prevLeft = NULL;
        for (int i = 1; i < k; i++)
        {
            prevLeft = curr;
            curr = curr->next;
        }
        ListNode *leftNode = curr;
        ListNode *rightNode = head;
        ListNode *prevRight = NULL;
        while (curr->next != NULL)
        {
            prevRight = rightNode;
            curr = curr->next;
            rightNode = rightNode->next;
        }
        if (leftNode == rightNode)
            return head;
        if (prevLeft != NULL)
        {
            prevLeft->next = rightNode;
        }
        else
        {
            head = rightNode;
        }
        if (prevRight != nullptr)
        {
            prevRight->next = leftNode;
        }
        else
        {
            head = leftNode;
        }
        ListNode *temp = leftNode->next;
        leftNode->next = rightNode->next;
        rightNode->next = temp;
        return head;
    }
};