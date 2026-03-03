struct ListNode* middleNode(struct ListNode* head) {
    int idx = 0;
    struct ListNode* temp = head;
    while (temp != NULL){
        idx++;
        temp = temp->next;
    }
    int mid = idx/2;

    for (int i = 0;i < mid;i++){
        head = head->next;
    }
    return head;
}
