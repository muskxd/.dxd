#include<stdio.h>
#include<conio.h>
int i,front,rear,ch,s[3],item;
void insert(),delet(),dis();
main()
{
front=0;
rear=-1;
ch=0;
while(ch!=4)
{
printf("\nEnter the menu for queue operation\n");
printf("\n1:insert\n2:delete\n3:display\n4:exit\n");
printf("Input ur choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert(); break;
case 2:
delet(); break;
case 3:
dis(); break;
case 4:
exit(0); break;
default:
printf("Invalid choice\n");
}
}return 0;
}
void insert()
{
int item;
if(rear==3-1)
{
printf("Queue is overflow\n");
return;
}
printf("Enter an item to be inserted:");
scanf("%d",&item);
rear+=1;
s[rear]=item;
}
void delet()
{
if(front>rear)
{
printf("Queue is empty\n");
return;
}
printf("Item to be deleted is %d\n",s[front++]);
}
void dis()
{
if(front>rear)
{
printf("Queue is empty\n");
return;
}
printf("\nQueue contains......\n");
for(i=front; i<=rear; i++)
printf("%d\t",s[i]);
}
