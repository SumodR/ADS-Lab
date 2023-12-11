#include<stdio.h>
#include<stdlib.h>
#define SIZE 4 
void push();
void pop();
void display();
void search();
struct node{
	int data;
	struct node*next;
}*head,*temp;
int item;
void main()
{
int ch;
do{
printf("\nEnter choice (1.push,2.pop,3.display,4.search,5.exit):");
scanf("%d",&ch);
switch(ch)
{
 case 1: push();
	break;
 case 2: pop();
	break;
 case 3: display();
	break;
 case 4: search();
	break;
 case 5: exit(0);
	
 default: printf("Invalid choice.");	
}
}
while(1);
}


void push()
{
 /*struct node*new;
 new=(struct node*)malloc(sizeof(struct node));
 printf("Enter element:");
 scanf("%d",&new->data);
 new->next=NULL;
 temp=head;
 while(temp->next!=0)
  temp=temp->next;
 temp->next=new;*/

 struct node*new;
 new=(struct node*)malloc(sizeof(struct node*));
 printf("Enter element:");
 scanf("%d",&new->data);
 new->next=head;
 head=new;
}


void pop()
{
 /*struct node*prev;
 temp=head;
 while(temp->next!=0){
  prev=temp;
  temp=temp->next;
 }
 prev->next=0;
 free(temp);  */

 temp=head;
 head=head->next;
 printf("Removed element is:%d",temp->data);
 free(temp);
}

void display()
{
 temp=head;
 printf("The elements are:-\n");
 while(temp!=0){
  printf("%d\t",temp->data);
  temp=temp->next;
 }
}

void search()
{
 int p=1,item,flag=0;
 if(head==NULL)
  printf("List is empty-Underflow.");
 else{
  printf("Enter item to be searched:");
  scanf("%d",&item);
  temp=head;
  while(temp->next!=NULL){
   if(temp->data==item){
    flag=1;
    break;
   }
   p++;
   temp=temp->next; 
  }

  if(flag==1)
   printf("Element is found at node-%d.",p);
  else
   printf("Element is not found."); 
 }

}




















