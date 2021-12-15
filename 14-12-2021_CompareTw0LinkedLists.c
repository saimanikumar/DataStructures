

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int sizeOflist(SinglyLinkedListNode* head){
    SinglyLinkedListNode *temp;
    temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp -> next ;
    }
    return size;
}
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int s1 = sizeOflist(head1);
    int s2 = sizeOflist(head2);
    SinglyLinkedListNode *temp1;
    SinglyLinkedListNode *temp2;
    temp1 = head1;
    temp2 = head2;
    
    if(s1 == s2){
        while(temp1 -> next != NULL){
            if(temp1 -> data != temp2 -> data){
                return false;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return true;
    }
    else{
        return false;
    }
    

}

