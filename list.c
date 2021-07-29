#include "list.h"
#include"call.h"

node* create()
{
node* temp;
temp= (node*) malloc(sizeof(node));
temp->next=NULL;
return temp;
}

node* create_node(eletype x)
{
node*temp;
temp=(node *) malloc(sizeof(node));
temp->data=x;
temp->next=NULL;
return temp;
}

int insert(node* head, eletype x)
{
node *temp, *p;
temp= create_node(x);
p=head;
while((p->next)!=NULL)
{
p = p->next;
}
temp->next=NULL;
p->next= temp;
return 0;
}

eletype retrieve_last(node*head)
{
    eletype x;
    node*temp;
    temp=head;
    node*old;
    while(temp->next)
    {
        old=temp;
        temp=temp->next;

        }
        old->next=NULL;
        x=temp->data;
        free(temp);
        return x;
}
eletype find_tail(node*head)
{
    eletype x;
    node*temp;
    temp=head;
    while(temp->next)
    {
        temp=temp->next;

        }
        x=temp->data;
        return x;
}
int empty(node*head)
{
    if(head->next==NULL)
        return 1;
    else
        return 0;
}

int insert_after(int pos,node*head,eletype x)
{
   node *temp,*q,*p;
   p=head;
   int c=0;
   while(c!=pos)
   {
       p=p->next;
       c++;
   }
   temp=create_node(x);
   temp->next=p->next;
   p->next=temp;
return 0;
}

int display(node* head)
{
node *p;
p=head->next;;
while(p)
{
print(p->data);
p= p->next;
}
return 0;
}

int destroy(node* head)
{
node*p,*temp;
p=head;
while(p)
{
temp=p;
p=p->next;
free(temp);
}
free(head);
return 0;
}
