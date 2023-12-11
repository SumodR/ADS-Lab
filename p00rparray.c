#include<stdio.h>
void main ()
{
int a[5],i;
printf("Enter numbers:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("The array is:-\n");
for(i=0;i<5;i++)
{
printf("%d,\t",a[i]);
}
}
