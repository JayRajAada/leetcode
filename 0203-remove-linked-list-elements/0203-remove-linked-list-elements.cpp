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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode *temp = dummyNode;
        while (temp->next != NULL)
        {
            if (temp->next->val == val)
            {
                ListNode *node = temp->next;
                temp->next = node->next;
                delete (node);
            }
            else
            {
                temp = temp->next;
            }
        }
        head = dummyNode->next;
        delete (dummyNode);
        return head;
    }
};