
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* t1 = list1;
    struct ListNode* t2 = list2;

    struct ListNode* dum = (struct ListNode*) malloc (sizeof(struct ListNode));
    dum->val = -1;
    dum->next = NULL;
    struct ListNode* temp = dum;

    while( t1 != NULL && t2 != NULL){
        if (t1->val <= t2->val){
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }

        else{
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if (t1 != NULL) {
        temp->next = t1;
    } else {
        temp->next = t2;
    }
    return dum->next;
}
