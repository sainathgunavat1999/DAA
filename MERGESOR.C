#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void main()
{
 int n,i,a[50],low=0,high;
 printf("\nEnter number of elements:");
 scanf("%d",&n);
 high=n-1;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 mergesort(a,low,high);
 printf("\nAfter sorting:");
 for(i=0;i<n;i++)
 {
 printf("\n%d",a[i]);
 }
 getch();
}
void mergesort(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  mergesort(a,low,mid);
  mergesort(a,mid+1,high);
  merge(a,low,mid,high);
 }
}
void merge(int a[],int low,int mid,int high)
{
int p,i,j,k,temp[30];
i=low;
j=mid+1;
k=low;
while(i<=mid && j<=high)
{
 if(a[i]<a[j])
 {
  temp[k++]=a[i++];
 }
 else
 {
 temp[k++]=a[j++];
 }
}
 if(i>mid)
 {
  for(p=j;p<=high;p++)
  temp[k++]=a[p];
 }
 else
 {
  for(p=i;p<=mid;p++)
  temp[k++]=a[p];
 }
 for(p=low;p<=high;p++)
 a[p]=temp[p];
}

