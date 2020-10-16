#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack *next;

}*top;
void push(int value)
{
struct stack *ptr;
ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->data=value;
ptr->next=top;
top=ptr;
return;
}
int pop()
{
if(top==NULL)
{
cout<<"stack empty!!!";
getch();
}
else
{
int temp=top->data;
top=top->next;
cout<<"poped element is:"<<endl;
return(temp);

}
 }
void display()
{
struct stack *nw=NULL;
nw=top;
cout<<"stack elements are: -->";
while(nw!=NULL)
{
cout<<nw->data;
nw=nw->next;
}
}
void main()
{
int a,b;
clrscr();
cin>>a;
push(a);
display();
b=pop();
cout<<b;
getch();
}
