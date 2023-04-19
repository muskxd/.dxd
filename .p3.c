#include<stdio.h>
#include<stdlib.h> int
i,top,ch,s[3],item;
void push(),pop(),dis();
void main()
{
top=-1;
ch=0;
while(ch!=4)
{
printf("\nEnter the menu for stack operation\n");
printf("\n1:insert\n2:delete\n3:display\n4:exit\n");
printf("Input ur choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: dis();
break;
case 4: exit(0);
break;
default: printf("Invalid choice\n");
}
}return 0;
}
void push()
{
int item;
if(top==3-1)
{
printf("Stack Overflow\n");
return;
}
printf("Enter an item to be pushed:");
scanf("%d",&item);
top+=1;
s[top]=item;
}
void pop()
{
if(top==-1)
{
printf("Stack Undeflow\n");
return;
}
printf("Item poped is %d\n",s[top--]);
}
void dis()
{
if(top==-1)
{
printf("Stack is empty\n");
return;
}
printf("\nStack contains ..... \n");
for(i=0; i<=top; i++)
printf("%d\t",s[i]);
}
