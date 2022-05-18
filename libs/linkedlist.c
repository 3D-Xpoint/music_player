#include <linkedlist.h>

static Node* _head = NULL;

static Node* _tail = NULL;

static Node* _cur_node = NULL;

Node* insert_after(Node* cur_node,Node* new_node){
new_node->next = new_node;
new_node->prev = cur_node->prev;
cur_node->next = new_node;
new_node->next->prev = new_node;
return new_node;

}

