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
class Solution {     // Brute force solution with O(2n).
public:
    int length(ListNode* head) {
      ListNode* slow = head;
      ListNode* fast = head;
      while(fast != NULL && fast->next != NULL){
          slow = slow->next;
          fast = fast->next->next;
          if(slow == fast){
              break;
          }
      }
        int cnt = 1;
        fast = fast->next;
        while(slow != fast){
            cnt++;
            fast = fast->next;
        }
        return cnt;
    }
};
