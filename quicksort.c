#include<stdio.h>
void quicksort(int a[],int low, int high);
int partition(int a[],int low, int high);
void main()
{
    int n,a[50],i;
    printf("\nEnter number of elements:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}
void quicksort(int a[],int low, int high)
{   
    int j;
    if(low<high)
    {
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low,j=high+1;
    do
    {
        do
        {
            i++;
        } while (a[i]<pivot && i<=high);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j)
        {
            a[i]+=a[j];
            a[j]=a[i]-a[j];
            a[i]-=a[j];
        }
        
    } while (i<=j);
    a[low]=a[j];
    a[j]=pivot;
    return j;
}
