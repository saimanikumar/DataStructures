

/*
 * Complete the 'removeDuplicates' function below.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp, *next;
    temp = head;
    next = temp -> next;
    while(next != NULL){
        if (temp -> data == next -> data){
            temp -> next = next -> next;
            next = temp -> next;
        }
        else{
            temp = temp -> next;
            next = temp -> next;
        }
    }
    return head;
}

