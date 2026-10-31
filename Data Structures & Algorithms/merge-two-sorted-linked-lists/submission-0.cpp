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
    vector<int>merge(vector<int>&a,vector<int>&b){
        vector<int>ans;
        int i=0,j=0;
        int n = a.size();
        int m = b.size();
        while(i<n && j<m){
            if(a[i] <= b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(a[i]);
            i++;
        }
        while(j<m){
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //brute force store them in array and then apply merge sort on them 
        //again convert them in ll
        vector<int>a,b;
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        while(t1 != NULL){
            a.push_back(t1->val);
            t1 = t1->next;
        }
        while(t2 != NULL){
            b.push_back(t2->val);
            t2 = t2->next;
        }
        vector<int>arr = merge(a,b);
        ListNode* dummyNode = new ListNode(-1);
        ListNode* dn = dummyNode;
        for(int i=0;i<arr.size();i++){
            ListNode* temp = new ListNode(arr[i]);
            dn->next = temp;
            dn = dn->next;
        }
        return dummyNode->next;
    }
};
