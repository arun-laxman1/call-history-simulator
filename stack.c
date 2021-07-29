#include"stack.h"
#include<stdlib.h>
#include<stdio.h>

int push(eletype x,stack s)
{
    insert(s,x);
    return 0;
}

eletype pop(stack s)
{
    eletype p;
    p= retrieve_last(s);
    return p;
}

int isempty(stack s)
{
    int x=empty(s);
    return x;
}

eletype peep(stack s)
{
    eletype p;
    p=find_tail(s);
    return p;
}
