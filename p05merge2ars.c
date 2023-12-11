#include<stdio.h>
void main()
{
int a[50],b[50],c[100],m,n,i,j=0,k=0;

printf("Enter size of 1st array:");
scanf("%d",&m);
printf("Enter elements of 1st array in sorted order:");
for(i=0;i<m;i++)
{
 scanf("%d",&a[i]);
}

printf("Enter size of 2nd array:");
scanf("%d",&n);
printf("Enter elements of 2nd array in sorted order:");
for(i=0;i<n;i++)
{
 scanf("%d",&b[i]);
}

i=0;

while(i<m && j<n)
{
 if(a[i]<b[j])
 {
  c[k]=a[i];
  i++;
 }
 else
 {
  c[k]=b[j];
  j++;
 }
 k++;
}

if(i>=m)
{
 while(j<n)
 {
  c[k]=b[j];
  j++;
  k++;
 } 
}

if(j>=n)
{
 while(i<m)
 {
  c[k]=a[i];
  i++;
  k++;
 } 
}

printf("Sorted array after merging:-\n");
for(i=0;i<m+n;i++)
{
 printf("%d\t",c[i]);
}
}
