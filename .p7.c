#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node * link;
};

struct node *first = NULL , *head , *ptr , *temp , *temp1;

void create(){
	head = (struct node*)malloc(sizeof(struct node);
	printf("enter the data " );
	scanf("%d" , &head->data);
	head->link = NULL;
	first = head;
	}

void insert_beg(){
        ptr = (struct node*)malloc(sizeof(struct node));
	printf("enter the data \n");
	scanf("%d" , &ptr->data);
	ptr->link = first;
	first = ptr;
	}

void insert_end(){
        ptr = first;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("enter the data \n");
	scanf("%d" , &temp->data);
	temp->link = NULL;
	while (ptr -> link != NULL) {
		ptr = ptr -> link;
	}
	ptr -> link = temp;
}

void del_beg(){
	if(first == NULL){
		printf("the list is empty");
	}
	else {
		temp = first ;
		first = first -> link;
		free(temp);
	}
}
void del_end(){
	if(first == NULL){
		printf("the list is already empty");
	}
	else {
		temp = first ;
		temp1= first;
		while(temp->link != NULL){
			temp1 = temp;
			temp = temp->link;
		}
		temp1 -> link = NULL;
		free(temp);
		temp = NULL;
	}
}

void display(){
	head = first;
	printf("the sll contains ");
	while(head != NULL){
		printf("%d" , head->data);
		head = head -> link;
	}
}

