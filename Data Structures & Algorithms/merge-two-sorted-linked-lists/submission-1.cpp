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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* dn = dummyNode;
        while(t1 != NULL && t2 != NULL){
            if(t1->val <= t2->val){
                ListNode* temp = new ListNode(t1->val);
                dn->next = temp;
                dn = dn->next;
                t1 = t1->next;
            }else{
                ListNode* temp = new ListNode(t2->val);
                dn->next = temp;
                dn = dn->next;
                t2 = t2->next;
            }
        }
        while(t1 != NULL){
            ListNode* t = new ListNode(t1->val);
            dn->next = t;
            dn = dn->next;
            t1 = t1->next;
        }
        while(t2 != NULL){
            ListNode* t = new ListNode(t2->val);
            dn->next = t;
            dn = dn->next;
            t2 = t2->next;
        }
        return dummyNode->next;
    }
};
