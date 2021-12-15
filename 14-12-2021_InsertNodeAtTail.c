

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *n;
    n = create_singly_linked_list_node(data);
    if(head == NULL){
        head = n;
        return head;
    }
    SinglyLinkedListNode *temp;
    temp = head;
    while( temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    return head;

}

