#include <stdio.h>
#include "std_types.h"
#include "LinkedList.h"

int main(void) {
	
	node_t *head_ref = NULL_PTR;
	
	LinkedList_append(&head_ref, 5);
	LinkedList_print(head_ref); // 5
	LinkedList_push(&head_ref, 7);
	LinkedList_print(head_ref); // 7 5
	LinkedList_append(&head_ref, 3);
	LinkedList_print(head_ref); // 7 5 3
	LinkedList_push(&head_ref, 4);
	LinkedList_print(head_ref); // 4 7 5 3
	LinkedList_insertAfter(&head_ref, head_ref->next, 1);
	LinkedList_print(head_ref); // 4 7 1 5 3	
	LinkedList_deleteNode(&head_ref, head_ref->next);
	LinkedList_print(head_ref); // 4 1 5 3	
	LinkedList_deleteNode(&head_ref, head_ref);
	LinkedList_print(head_ref); // 1 5 3	
	LinkedList_insertBefore(&head_ref, head_ref->next, 20);
	LinkedList_print(head_ref); // 	1 20 5 3
	LinkedList_insertBefore(&head_ref, head_ref, 25);
	LinkedList_print(head_ref); // 	25 1 20 5 3
	LinkedList_deleteValue(&head_ref,5);
	LinkedList_print(head_ref); // 	25 1 20 3
	
	LinkedList_insertAtIndex(&head_ref,2,100);
	LinkedList_print(head_ref); // 	25 1 100 20 3
	
	LinkedList_deleteAll(&head_ref);
	LinkedList_print(head_ref); // 	
	
	
}

