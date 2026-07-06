
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

    ListNode* revers(ListNode* slow){
        ListNode* temp = slow->next;
        ListNode* nex = NULL;
        ListNode* prev = NULL;
        while(temp != NULL){
            nex = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nex;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* newhead = revers(slow);
        ListNode* firsthead = head;
        while(newhead != NULL){
            if(newhead ->val != firsthead->val){
                return false;
            }
            newhead = newhead->next;
            firsthead = firsthead->next;
        }
        return true;
    }
};
