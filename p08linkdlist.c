#include<stdio.h>
#include<stdlib.h>
void insbeg();
void inspos();
void insend();
void delbeg();
void delpos();
void delend();
void display();
void search();

struct node{
	int data;
	struct node*next;
}*head,*temp;

void main()
{
int ch;
do{
printf("\n\nEnter choice:-\n1.Insert as first node,\n2.Insert at specific position,\n3.Insert as last node,\n4.Delete first node,\n5.Delete node at specific position,\n6.Delete last node,\n7.Display,\n8.Search,\n9.Exit\n:");
scanf("%d",&ch);
switch(ch)
{
 case 1: insbeg();
	break;
 case 2: inspos();
	break;
 case 3: insend();
	break;
 case 4: delbeg();
	break;
 case 5: delpos();
	break;
 case 6: delend();
	break;
 case 7: display();
	break;
 case 8: search();
	break;
 case 9: exit(0);
	
 default: printf("Invalid choice.");	
}
}
while(1);
}




void insbeg()
{
 struct node*new;
 new=(struct node*)malloc(sizeof(struct node*));
 printf("Enter element:");
 scanf("%d",&new->data);
 new->next=head;
 head=new;
}

void inspos()
{
 int i,pos;
 struct node*new;
 new=(struct node*)malloc(sizeof(struct node*));
 printf("Enter element:");
 scanf("%d",&new->data);
 new->next=NULL;
 
 printf("Enter position to be inserted at:");
 scanf("%d",&pos);

 temp=head;
 for(i=1;i<pos-1;i++)
  temp=temp->next;
  if(temp == NULL)  
  {  
   printf("\ncan't insert\n");  
   return;  
  }  
 new->next=temp->next;
 temp->next=new;
}


void insend()
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


void delbeg()
{
 temp=head;
 head=head->next;
 printf("Removed element is:%d",temp->data);
 free(temp);
}


void delpos()
{
 int i=1,pos;
 struct node*nextnode;
 
 printf("Enter position to be deleted from:");
 scanf("%d",&pos);

 temp=head;
while(i<pos-1)
 {
  temp=temp->next;
  i++;
 }
 nextnode=temp->next;
 temp->next=nextnode->next;
 printf("Removed element is:%d",nextnode->data);
 free(nextnode);

//Same process using for loop:-
/* for(i=1;i<pos-1;i++)
  temp=temp->next;

 nextnode=temp->next;
 temp->next=nextnode->next;
 printf("Removed element is:%d",nextnode->data);
 free(nextnode);*/
}



void delend()
{
 struct node*prev;
 temp=head;
 while(temp->next!=0){
  prev=temp;
  temp=temp->next;
 }
 prev->next=0;
 printf("Removed element is:%d",temp->data);
 free(temp);  
}

void display()
{
 if(head==NULL)
  printf("List is empty-Underflow.");
 else{
  temp=head;
  printf("The elements are:-\n");
  while(temp->next!=NULL){
   printf("%d\t",temp->data);
   temp=temp->next;
  }
  printf("%d\t",temp->data);
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

  if(temp->data==item)
   printf("Element is found at node-%d.",p);
  else if(flag==1)
   printf("Element is found at node-%d.",p);
  else
   printf("Element is not found");

 }

}


