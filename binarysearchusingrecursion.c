#include <stdio.h>
void BinarySearch(int [], int, int, int);
void main()
{
 int a[50],i,n,x;
 printf("Enter size of array:");
 scanf("%d",&n);
 printf("\nEnter array element(sorted)\n");
 for(i=0;i<n;++i)
    scanf("%d",&a[i]);
 printf("\nEnter the element to search:");
 scanf("%d",&x);
 BinarySearch(a,0,n-1,x);
}
void BinarySearch(int a[], int low, int high, int x)
{
 int mid;
 if (low > high)
 {
  printf("Key not found\n");
  return;
 }
 mid = (low + high) / 2;
 if (a[mid] == x)
 {
  printf("Key found\n");
  return;
 }
 else if (a[mid] > x)
 {
  BinarySearch(a, low, mid - 1, x);
 }
 else if (a[mid] < x)
 {
  BinarySearch(a, mid + 1, high, x);
 }
}
