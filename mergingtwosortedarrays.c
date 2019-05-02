#include<stdio.h>
void main()
{
 int a[50],b[50],c[100],k=0,i,j,n1,n2;
 printf("\nEnter number of elements of first array:");
 scanf("%d",&n1);
 printf("\nEnter sorted elements of first array:");
 for(i=0;i<n1;i++)
  scanf("%d",&a[i]);
 printf("\nEnter number of elements of second array:");
 scanf("%d",&n2);
 printf("\nEnter sorted elements of second array:");
 for(i=0;i<n2;i++)
  scanf("%d",&b[i]);
 i=0;
 j=0;
 while(i<n1 && j<n2)
 {
  if(a[i]<b[j])
  {
   c[k++]=a[i++];
  }
  else
  {
   c[k++]=b[j++];
  }
 }
 if (i >= n1)
 {
  while (j < n2)
  {
  c[k++] = b[j++];
  }
 }
 if (j >= n2)
 {
  while (i < n1)
  {
   c[k++] = a[i++];
  }
 }

 printf("\nAfter merging:");
 for(i=0;i<n1+n2;i++)
    printf("\n%d",c[i]);
}
