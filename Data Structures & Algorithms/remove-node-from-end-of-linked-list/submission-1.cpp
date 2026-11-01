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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int cnt = 0;
       ListNode* temp = head;
       while(temp != NULL){
         cnt++;
         temp = temp->next;
       }
       if(cnt == n){
        ListNode* newHead = head->next;
        delete head;
        return newHead;
       }else{
        int node = cnt-n;
        ListNode* prev = head;
        while(prev != NULL){
            node--;
            if(node==0)break;
            prev = prev->next;
        }
        ListNode* delNode = prev->next;
         prev->next = prev->next->next;
        delete delNode;
       
       }
       return head;
    }
};
