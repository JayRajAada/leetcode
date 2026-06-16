struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverseLinkedList(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while (temp != NULL)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        // Optimal Approach
        ListNode *fast = head, *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *newHead = reverseLinkedList(slow);
        fast = head;
        while (newHead != NULL && fast != NULL)
        {
            if (newHead->val != fast->val)
            {
                return false;
            }
            fast = fast->next;
            newHead = newHead->next;
        }
        return true;
    }
};