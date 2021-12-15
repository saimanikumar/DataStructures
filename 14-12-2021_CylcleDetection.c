

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *a[1000];
    SinglyLinkedListNode* temp;
    temp = head;
    int k = 0;
    a[0] = head;
    temp = head -> next;
    k++;
    while(temp != NULL){
        for(int i = 0; i <= k; i++){
            if(a[i] == temp){
                return 1;
            }
        }
        a[k] = temp;        
        temp = temp -> next;
        k++;
    }
    
    return 0;
}

