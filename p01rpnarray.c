#include<stdio.h>
void main ()
{
int a[50],i,n;
printf("Enter size:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The numbers are:-\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
