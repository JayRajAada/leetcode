struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Optimal Approach
        if(list1 == NULL && list2 == NULL)  return NULL;
        else if(list1 == NULL)  return list2;
        else if(list2 == NULL)  return list1;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode , *l1 = list1 , *l2 = list2;
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        if(l1 != NULL){
            temp->next = l1;
        }
        else{
            temp->next = l2;
        }
        return dummyNode -> next;
    }
};