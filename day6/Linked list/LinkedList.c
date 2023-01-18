#include <stdio.h>
#include <stdlib.h>
#include "std_types.h"
#include "LinkedList.h"

void LinkedList_push (node_t** head_ref, u32 data) {
	node_t* new_node_ref = (node_t*)malloc(sizeof(node_t));
	new_node_ref->data = data;
	new_node_ref->next = *head_ref;
	*head_ref = new_node_ref;
}

void LinkedList_append (node_t** head_ref, u32 data) {
	node_t* new_node_ref = (node_t*)malloc(sizeof(node_t));
	node_t* node_ref = *head_ref;
	
	new_node_ref->data = data;
	new_node_ref->next = NULL_PTR;
	
	if (NULL_PTR != *head_ref) {
		while (1) {
			if (NULL_PTR == node_ref->next) {
				node_ref->next = new_node_ref;
				break;
			}
			node_ref = node_ref->next;
		}
	}
	else {
		*head_ref = new_node_ref;
	}
}

void LinkedList_insertAfter (node_t** head_ref, node_t* before_node_ref, u32 data) {
	node_t* new_node_ref = (node_t*)malloc(sizeof(node_t));
	new_node_ref->data = data;
	if (NULL_PTR != *head_ref) {
		new_node_ref->next = before_node_ref->next;
		before_node_ref->next = new_node_ref;
	}
	else {
		new_node_ref->next = NULL;
		*head_ref = new_node_ref;
	}
}

	

void LinkedList_insertAtIndex (node_t** head_ref, u32 index, u32 data) {
	node_t* before_node_ref = *head_ref;
	for(int i=0; i<index;i++)
	{
		before_node_ref = before_node_ref->next;
	}
	LinkedList_insertBefore(head_ref,before_node_ref,data);
	
//	node_t* new_node_ref = (node_t*)malloc(sizeof(node_t));
//	new_node_ref->data = data;
//	if (NULL_PTR != *head_ref) {
//		if(before_node_ref!=*head_ref){
//		new_node_ref->next = before_node_ref->next;
//		before_node_ref->next = new_node_ref;
//		}else{
//			new_node_ref->next = *head_ref;
//			*head_ref=new_node_ref;
		
//		}
//	}
//	else {
//		new_node_ref->next = NULL;
//		*head_ref = new_node_ref;
//	}

	
	
}
void LinkedList_deleteNode (node_t** head_ref, node_t* node_ref) {
	node_t* before_node_ref = *head_ref;
	if (*head_ref != node_ref) {
		while(1) {
			if (before_node_ref->next == node_ref) {
				before_node_ref->next = node_ref->next;
				free(node_ref);
				break;
			}
			before_node_ref = before_node_ref->next;
		}
	}
	else {
		*head_ref = (*head_ref)->next;
		free(node_ref);
	}
}

void LinkedList_deleteAll (node_t** head_ref) {
	while(*head_ref !=NULL_PTR){
		LinkedList_deleteNode(head_ref,*head_ref);
		
		
	}
	
}



void LinkedList_print(node_t* head_ref) {
	if (NULL_PTR == head_ref) {
		printf("Linked List is empty\n");
	}
	else {
		while(NULL_PTR != head_ref) {
			printf("%d ", head_ref->data);
			head_ref = head_ref->next;
		}
		printf("\n");
	}
}

void LinkedList_insertBefore (node_t** head_ref, node_t* after_node_ref, u32 data){
	node_t* before_node_ref = *head_ref; // **1 2 ** 3 5
	if (*head_ref != after_node_ref) {
		while(1) {
			if (before_node_ref->next == after_node_ref) {
				node_t* new_node_ref = (node_t*)malloc(sizeof(node_t));
				new_node_ref->data = data;
				new_node_ref->next=before_node_ref->next;
				before_node_ref->next = new_node_ref;
				break;
				
			}
			before_node_ref = before_node_ref->next;
		}
	}
	else {
		node_t* new_node_ref = (node_t*)malloc(sizeof(node_t));
		new_node_ref->data = data;		
		new_node_ref->next=(*head_ref);
		*head_ref=new_node_ref;
	}
	
	
}

void LinkedList_deleteValue (node_t** head_ref, u32 data){
	node_t* before_node_ref = *head_ref; // 1 2 3 4
	if ((*head_ref)->data != data) {
		while(1) {
			if ((before_node_ref->next)->data == data) {
				node_t*temp=before_node_ref->next;
				before_node_ref->next = (before_node_ref->next)->next;
				
				free(temp);
				break;
			
			}
			//if( before_node_ref == NULL)
				//break;
			before_node_ref = before_node_ref->next;
			//if( before_node_ref == NULL)
				//break;
		}
	}
	else {
		
		*head_ref = (*head_ref)->next;
		free(before_node_ref);
	}
	
}

