#include<bits/stdc++.h>

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
    ListNode* reverseList(ListNode* head) {
//         stack<int> st;
//         ListNode*  temp = head;
        
//         while(temp!= NULL){
//             st.push(temp -> val);
//             temp = temp -> next;
        
//         }
        
//         temp = head;
//         while(temp!= NULL){
//             temp -> val = st.top();  // time comp = o(2n)
                                        // space comp = o(n)
//             st.pop();
//             temp = temp -> next;
//         }
//         return head;    
        
        ListNode* temp = head;
        ListNode* front ;
        ListNode* prev = NULL;
        while(temp!= NULL){
            
            front = temp -> next;  //stored temp next  to front
            temp -> next = prev; // linked temp next  to prev
            prev = temp; // moved prev to temp
            temp = front ; // mover temp to fornt
        
        }           //time complecixty = o(n)
                    // spaec complexity = o(1)
        return prev;
    }
};