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
      unordered_map<ListNode,int> mpp;
      ListNode* temp = head;
      int timer = 1;
      while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
          int value = mpp[temp];
          return timer-value;
        }
        mpp[temp] = timer;
        timer++;
        temp = temp->next;
      }
      return 0;
    }
};
