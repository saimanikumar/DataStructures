

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1, *temp2 , *temp;
    temp1 = head1;
    temp2 = head2;
    SinglyLinkedListNode *head;
    
    if(temp2 -> data > temp1 -> data){
        head = temp1;
        temp1 = temp1 -> next;
        
        // head -> next = temp2;
    }
    else{
        head = temp2;
        temp2 = temp2 -> next;
        
        // head -> next = temp1;
    }
    
    temp = head;
    
    while(temp1 != NULL && temp2 != NULL){
        
        if(temp2 -> data > temp1 -> data){
            temp -> next = temp1;
            temp1 = temp1 -> next;
        }
        else{
            temp -> next = temp2;
            temp2 = temp2 -> next;
        }
        temp = temp -> next;
        
    }
    
    while (temp1 != NULL) {
        temp -> next = temp1;
        temp = temp -> next;
        temp1 = temp1 -> next;
    }
    while (temp2 != NULL) {
        temp -> next = temp2;
        temp = temp -> next;
        temp2 = temp2 -> next;
    }
    return head;
}

