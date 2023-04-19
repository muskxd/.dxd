#include<stdio.h>
#include<string.h>
void push(char item[],int *top,char s[20][20])
{
*top+=1;
strcpy(s[*top],item);
}
char *pop(int *top,char s[20][20])
{
char *item;
item=s[*top];
*top-=1;
return item;
}
void pos_to_in(char postfix[], char infix[])
{
char s[20][20],symbol,temp[2],*op1,*op2;
int i,top;
top=-1;
for(i=0; i<strlen(postfix); i++)
{
symbol=postfix[i];
temp[0]=symbol;
temp[1]='\0';
switch(symbol)
{
case '+':
case '-':
case '*':
case '/':
case '$':
op2=pop(&top,s);
op1=pop(&top,s);
strcpy(infix,"(");
strcat(infix,op1);strcat(infix,temp);
strcat(infix,op2);
strcat(infix,")");
push(infix,&top,s);
break;
default : push(temp,&top,s);
}
}
}
main()
{
char postfix[25],infix[25];
printf("enter ur postfix expr\n");
scanf("%s",postfix);
pos_to_in(postfix,infix);
printf("\nThe equivalent postfix is %s\n",infix);
return 0;
}
