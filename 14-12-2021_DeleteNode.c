

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *prev;
    prev = head;
    // if(position < 0 || position >  n){
    //     return head;
    // }
    if(position == 0){
        head = head -> next;
        return head;
    }
    int i = 0;
    while(i < position-1 ){
        prev = prev -> next;
        i++;
    }
    prev -> next = prev -> next ->next;
    return head;
}

