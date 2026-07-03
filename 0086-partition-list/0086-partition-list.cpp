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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* lessHead = new ListNode(-1);
        ListNode* temp1 = lessHead;
        ListNode* greatHead = new ListNode(-1);
        ListNode* temp2 = greatHead;
        while(temp != NULL){
            if(temp->val < x){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        temp2->next = NULL;
        temp1->next = greatHead->next;
        head = lessHead->next;
        delete(lessHead);
        delete(greatHead);
        return head;
    }
};