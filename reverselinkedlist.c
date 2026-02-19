/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* nex = NULL;
    struct ListNode* crnt = head;

    while (crnt!=NULL){
        nex = crnt->next;
        crnt->next = prev;
        prev = crnt;
        crnt = nex;
    }
    head = prev;
    return head;
}