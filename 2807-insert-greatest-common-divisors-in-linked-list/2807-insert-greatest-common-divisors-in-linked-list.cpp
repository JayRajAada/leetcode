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
    int gcd(int a , int b){
        if(b == 0){
            return a;
        }
        return gcd(b , a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL)  return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        int value = 0;
        while(fast != NULL){
            value = gcd(slow->val , fast->val);
            ListNode* newNode = new ListNode(value);
            slow->next = newNode;
            newNode->next = fast;
            slow = slow->next->next;
            fast = fast->next;
        }
        return head;
    }
};