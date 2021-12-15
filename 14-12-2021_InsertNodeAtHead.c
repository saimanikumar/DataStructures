

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *n;
    n = create_singly_linked_list_node(data);
    
    if (head == NULL){
            head = n;
            head -> next = NULL;
            return head;            
    }
    n -> next = head;
    head = n;
    return head;
}

