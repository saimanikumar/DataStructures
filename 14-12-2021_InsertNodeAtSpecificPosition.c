

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *n;
    n = create_singly_linked_list_node(data);
    SinglyLinkedListNode *prev;
    if(position == 0){
        n -> next = head;
        head = n;
        return head;
    }
    prev = head;
    int i = 0;
    while (i < position - 1 ) {
        prev = prev -> next;
        i++;
    }
    n -> next = prev -> next;
    prev -> next = n;
    return head;
}

