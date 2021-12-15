

/*
 * Complete the 'reversePrint' function below.
 *
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

void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp;
    temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp -> next ;
    }
    int a[size];
    
    temp = head;
    for(int i = 0; i < size; i++){
        a[i] = temp -> data;
        temp = temp -> next;
    }
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n",a[i]);
    }
}

