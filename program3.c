#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5
int s[MAX],top=-1,item;
int IsFull()
{
if(top>=MAX-1)
return 1;
return 0;
}
int IsEmpty()
{
if(top==-1)
return 1;
return 0;
}
void push(int item)
{
top++;
s[top]=item;
}
void pop()
{
item=s[top];
top--;
}
void display()
{
int i;
printf("\nThe elements of the stack are:");
for(i=top;i>=0;i--)
printf("\n%d",s[i]);
}
void check_pal()
{
int num=0,temp,digit,revnum=0,k=0;
if(top==-1)
{
printf("Stack is empty");
return;
}
else
{
while(top!=-1)
{
pop();
num=num*10+item;
revnum=item*pow(10,k)+revnum;
k=k+1;
}
printf("\nReverse Number of %d is: %d\n",num,revnum);
if(num==revnum)
printf("The stack contains a palindrome number\n");
else
printf("The stack does not contain a palindrome number\n");
}
}
void main()
{
int ch;
do
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Check palindrome\n5.Exit\n");
printf("\nEnter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nEnter the element to be inserted");
scanf("%d",&item);
if(IsFull())
printf("Stack over flow\n");
else
push(item);
break;
case 2:if(IsEmpty())
printf("Stack Underflow\n");
else
{
pop();
printf("The item deleted is %d\n",item);
}
break;
case 3:if(IsEmpty())
{
printf("Stack is Empty\n");
}
else
display();
break;
case 4:check_pal();
break;
case 5:printf("Program Terminated\n");
exit(0);
default:printf("Invalid choice\n");
}
}
while(ch!=5);
}
