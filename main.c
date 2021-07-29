#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "stack.h"
#include"call.h"

eletype scan()
{
    eletype c;
	printf("\nEnter name:\t");
  scanf("%s",c.cname);
  printf("Enter phone number:\t");
  scanf("%lli",&c.phno);
  printf("Enter email id:\t");
  scanf("%s",c.email);
  return c;
}

int print(eletype d)
{
    printf("\nName:\t%s\n",d.cname);
    printf("Phone Number:\t%lli\n",d.phno);
    printf("Email id:%s\t\n",d.email);
    return 0;
}

int main(int argc, char *argv[])
{
    node* l;
    l=create();
    stack s=create();
    int limit,i;
    printf("Enter number of contacts:\t");
    scanf("%d",&limit);
    eletype c[limit];
    for(i=0;i<limit;i++)
    {
        c[i]=scan();
        insert(l,c[i]);

    }
    int num=0;
    for(i=0;i<5;i++)//assuming number of logs in call history to be equal to 10
    {
        num=rand()%limit;
        push(c[num],s);
    }
    eletype last=peep(s);
    int ch;
    char choice='Y';
    do
    {
        printf("\n1.Display call history\n2.Display last called contact details\n3.Display my contacts\n\nEnter your choice:\t");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            {
                for(i=0;i<5;i++)
                {
                	if(isempty(s))
                	{
                		for(i=0;i<5;i++)//assuming number of logs in call history to be equal to 10
    					{
        					num=rand()%limit;
        					push(c[num],s);
    					}	
					}
                    eletype p=pop(s);
                    print(p);
                    printf("\n");
                }
                break;
            }
        case 2:
            {
                print(last);
                break;
            }
        case 3:
            {
                display(l);
                break;
            }
        default: printf("Enter valid choice");
    }
    printf("\nDo you want to continue? Y/N\t");
    scanf("\n%c",&choice);
    }while(choice=='y'||choice=='Y');

    destroy(s);
    destroy(l);
    return 0;
}
