#include<stdio.h>
#include<stdlib.h>
#define SIZE 4 
void enque();
void deque();
void display();
void search();
int cq[SIZE],front=-1,rear=-1,item;
void main()
{
int ch;
do{
printf("\nEnter choice (1.enqueue,2.dequeue,3.display,4.search,5.exit):");
scanf("%d",&ch);
switch(ch)
{
 case 1: enque();
	break;
 case 2: deque();
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


void enque()
{ 
 if (front==(rear+1)%SIZE)
  printf("Queue is full-OVERFLOW");
 else{
  if(front==-1)
   front=0;
  rear=(rear+1)%SIZE;
  printf("Enter element:");
  scanf("%d",&item);
  cq[rear]=item;
 }
}

void deque()
{
 if (front==-1)
  printf("Queue is empty-UNDERFLOW");
 else{
  item=cq[front];
  printf("Removed item:%d",item);
  
  if(front==rear)
   front=rear=-1;
  else
   front=(front+1)%SIZE;
 }
}

void display()
{
 int i=front;
 if (front==-1&&rear==-1)
  printf("Queue is empty-UNDERFLOW");
 else{
 printf("The queue is:-\n");

/*while(i!=rear)  
        {  
            printf("%d,", cq[i]);  
            i=(i+1)%SIZE;  
        } 
 printf("%d", cq[i]);  */

 for(i=front;i!=rear;i=(i+1)%SIZE)
 //printf("f=%d",i);
  printf("%d\t",cq[i]);
 //printf("r=%d",rear);
 printf("%d\t",cq[i]);
 }
}

void search()
{
 int i,f=0,item;
 printf("Enter element to be searched:");
 scanf("%d",&item);
 
 if (front==-1&&rear==-1)
  printf("Queue is empty-UNDERFLOW");
 else{

 for(i=front;i!=rear;i=(i+1)%SIZE)
 {
  if(cq[i]==item)
  {
   f=1;
   break;
  }
 }
 
 if(cq[i]==item)
  printf("Element %d is found",item);
 else if(f==1)
  printf("Element %d is found",item);
 else
 printf("Element %d is not found",item);
 
 }
}


