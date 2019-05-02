#include<stdio.h>
void main()
{
 int a[50],i,n,x,flag=0,low,high,mid;
 printf("Enter size of array:");
 scanf("%d",&n);
 printf("\nEnter array element(sorted)\n");
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("\nEnter the element to search:");
 scanf("%d",&x);
 low=0;
 high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(x==a[mid])
  {
  flag=1;
  break;
  }
  else if(x>a[mid])
    low=mid+1;
  else
    high=mid-1;
 }
 if(flag==1)
    printf("\nElement found at position %d",mid);
 else
    printf("\nElement not found");
}
