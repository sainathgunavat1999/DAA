#include<stdio.h>
void main()
{
    int a[50],flag=0,n,i,key;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter key to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key)
            flag=1;
    if(flag)
        printf("\nElement found.");
    else
        printf("\nElement not found.");
}
