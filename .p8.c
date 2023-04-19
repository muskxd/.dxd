#include<stdio.h>
#include<malloc.h>
struct node
{
int value;
struct node *next;
};
int main()
{
int item,n;
struct node * head;
struct node * tail;
struct node * temp;
struct node * prev;
struct node * current;
struct node * next;
temp=(struct node*)malloc(sizeof(struct node));
head=temp;
printf("enter the size of list\n");
scanf("%d",&n);
printf("enter the list to be reversed\n");
temp = (struct node *)malloc(sizeof(struct node));
scanf("%d",&item);
temp->value = item;
head = temp;
n--;
while(n!=0)
{
temp->next = (struct node *)malloc(sizeof(struct node));
temp = temp->next;
scanf("%d",&item);
temp->value = item;
--n;
}
temp->next = NULL;
tail = temp;
temp = head;while(temp)
{
printf(" %d\n", temp->value);
temp = temp->next;
}
printf("Reversing the linked list\n");
prev = NULL;
current = next = head;
while(current)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
temp = tail;
while(temp)
{
printf(" %d\n", temp->value);
temp = temp->next;
}
return 0;
}
