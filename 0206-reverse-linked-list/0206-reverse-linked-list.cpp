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
// Using Recursion
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
       if(head==NULL || head->next==NULL) return head;
       ListNode*lastnode=head->next;
       ListNode* newhead=reverseList(head->next);
        
        lastnode->next=head;
        head->next=NULL;// This step in necessary
        
        return newhead;
        
    }
};