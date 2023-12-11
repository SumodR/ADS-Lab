#include<stdio.h>
void main()
{
int a[50],i,n,flag=0,key;

printf("Enter size of array:");
scanf("%d",&n);

printf("Enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter element to be searched:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
 if(a[i]==key)
 {
  flag=1;
  break;
 }
}

if(flag==1)
{
 printf("Element is present in the array.");
}
else
 printf("%d\t",a[i]);

}
