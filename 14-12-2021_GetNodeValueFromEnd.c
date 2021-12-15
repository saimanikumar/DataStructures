

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *temp;
    int size = 0;
    temp = head;
    while(temp -> next != NULL){
        size++;
        temp = temp -> next;
    }
    int pos = size - positionFromTail;
    int i = 0;
    temp = head;
    while(i < pos){
        temp = temp -> next;
        i++;
    }
    return (temp -> data);
}

