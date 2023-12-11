#include<stdio.h>
void main ()
{
int a[50],i,sum=0,avg,n;
printf("Enter size:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=sum/n;
printf("Sum=%d\n",sum);
printf("Average=%d\n",avg);

}
