#ifndef list_h
#define list_h
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
#include"call.h"


typedef call eletype;
typedef struct
{
eletype data;
 struct node*next;

}node;
node*create_node(eletype );
node*create();
int insert(node*,eletype);
int search(node*,eletype);
int insert_after(int ,node*,eletype);
eletype retrieve_last(node*head);
int empty(node*);
int display(node*);
int destroy(node*);
int delete(node*,eletype);
eletype find_tail(node*);
#endif
