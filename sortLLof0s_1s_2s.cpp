Listnode* sort(head){
  zerohead = listnode(0,NULL);
  onehead = listnode(0,NULL);
  twohead = listnode(0,NULL);

  Listnode* zero = zerohead;
  Listnode* one = onehead;
  Listnode* two = twohead;

  Listnode* temp = head;
  while(temp != NULL){
    if(temp->val == 0){
      zero->next = temp;
      zero = zero->next;
      temp = temp->next;
    }
    else if(temp->val == 1){
      one->next = temp;
      one = one->next;
      temp = temp->next;
    }
    else{ // temp->val == 2
      two->next = temp;
      two = two->next;
      temp = temp->next;
    }
  }
  two->next = NULL;
  if(onehead->next != NULL){
    zero->next = onehead->next;
  }
  else{
    zero->next = twohead->next;
  }
  one->next = twohead->next;
  return zerohead->next;
}
