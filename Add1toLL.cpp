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
    int helper(ListNode* temp){
            if(temp == NULL){  // base case of recursion
                    return 1;
            }
            int carry = helper(temp->next);
            temp->val = temp->val + carry;
            if(temp->val < 10){ // no carry
                    return 0;
            }
            temp->val = 0; // there is a carry
            return 1;
    }
    ListNode* add1LL(ListNode* head) {
            int carry = helper(head);
            if(carry == 1){ // if there is an extra digit after addition
                    ListNode* newnode = new ListNode(1);
                    newnode->next = head;
                    head = newnode;
                    return head;
            }
            return head;
        }
};        
