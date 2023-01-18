
#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#define NULL_PTR ((void*)0)

typedef struct node {
	u32 data;
	struct node* next;
} node_t;


void LinkedList_push (node_t** head_ref, u32 data);//
void LinkedList_append (node_t** head_ref, u32 data);//
void LinkedList_insertAfter (node_t** head_ref, node_t* before_node_ref, u32 data);//
void LinkedList_insertBefore (node_t** head_ref, node_t* after_node_ref, u32 data);//
void LinkedList_insertAtIndex (node_t** head_ref, u32 index, u32 data);//
void LinkedList_deleteNode (node_t** head_ref, node_t* node_ref);//
void LinkedList_deleteValue (node_t** head_ref, u32 data);//
void LinkedList_deleteAll (node_t** head_ref);//
void LinkedList_print (node_t* head_ref); //


#endif