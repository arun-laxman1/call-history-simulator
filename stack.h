#ifndef stack_h
#define stack_h
#include"list.h"

typedef node* stack;


int push(eletype ,stack );
eletype pop(stack);
int isempty(stack);
eletype peep(stack);
#endif
