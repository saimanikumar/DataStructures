

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head){
    SinglyLinkedListNode *prev, *curr, *next;
    
    prev = NULL;
    
    if(head->next == NULL || head == NULL){
        return head;
    }
    prev = head;
    curr = head -> next;
    while(curr != NULL){    
        
        next = curr -> next;
        
        curr -> next = prev;
        
        prev = curr;
        curr = next;
        
    }
    head -> next = NULL;
    head = prev;
    return head;
}

