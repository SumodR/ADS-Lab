#include<stdio.h>
#include<stdlib.h>
#define SIZE 4 
void push();
void pop();
void display();
void search();
int s[SIZE],top=-1,item;
void main()
{
int ch;
do{
printf("\nEnter choice (1.push,2.pop,3.display,4.exit,5.search):");
scanf("%d",&ch);
switch(ch)
{
 case 1: push();
	break;
 case 2: pop();
	break;
 case 3: display();
	break;
 case 4: exit(0);
	break;
 case 5: search();
	break;
	
 default: printf("Invalid choice.");	
}
}
while(1);
}


void push()
{

 if (top==SIZE-1)
  printf("Stack is full-OVERFLOW");
 else{
  top+=1;
  printf("Enter element:");
  scanf("%d",&item);
  s[top]=item;
 }

}

void pop()
{

 if (top==-1)
  printf("Stack is empty-UNDERFLOW");
 else{
  
  printf("Popped item:%d",s[top]);
  top--;
 }
  
}

void display()
{
 int i;
 if (top==-1)
  printf("Stack is empty-UNDERFLOW");
 else{
 printf("The stack is:-\n");
 for(i=top;i>=0;i--)
  printf("%d\t",s[i]);
 }
}

void search()
{
 int i,p,item,flag=0;
 if (top==-1)
  printf("Stack is empty-UNDERFLOW");
 else{
 printf("Enter item to be searched:");\
 scanf("%d",&item);
 for(i=top;i>=0;i--)
  if(s[i]==item){
   p=i;
   flag=1;
  }
 if(flag==1)
  printf("Element is found at pos-%d from position 0.",p);
 else
  printf("Element is not found.");
 }
}










