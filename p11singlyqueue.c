#include<stdio.h>
#include<stdlib.h> 
void enq();
void deq();
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
printf("\nEnter choice (1.enque,2.deque,3.display,4.search,5.exit):");
scanf("%d",&ch);
switch(ch)
{
 case 1: enq();
	break;
 case 2: deq();
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


void enq()
{

 struct node*new;
 new=(struct node*)malloc(sizeof(struct node*));
 printf("Enter element:");
 scanf("%d",&new->data);
 new->next=NULL;
 if(head == NULL)  
 {   
  head=new;  
  printf("\nNode inserted");  
 } 
 else
 { 
 temp=head;
 while(temp->next!=NULL)
  temp=temp->next;
 temp->next=new;
 printf("\nNode inserted");
 }
}


void deq()
{
 /*struct node*prev;
 temp=head;
 while(temp->next!=0){
  prev=temp;
  temp=temp->next;
 }
 prev->next=0;
 free(temp);  */
 if(head==NULL)
  printf("Queue is empty-Underflow.");
 else{
  temp=head;
  head=head->next;
  printf("Removed element is:%d",temp->data);
  free(temp);
 }
}

void display()
{
 if(head==NULL)
  printf("Queue is empty-Underflow.");
 else{
  temp=head;
  printf("The elements are:-\n");
  while(temp!=0){
   printf("%d\t",temp->data);
   temp=temp->next;
  }
 }
}

void search()
{
 int p=1,item,flag=0;
 if(head==NULL)
  printf("Queue is empty-Underflow.");
 else{
  printf("Enter item to be searched:");
  scanf("%d",&item);
  temp=head;
  while(temp!=0){
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

