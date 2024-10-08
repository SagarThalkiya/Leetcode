/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(fast == NULL) return 0;
        
        while(fast != NULL  && fast -> next!=NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(slow == fast) return 1;
            
        }
        return 0;
    }
};