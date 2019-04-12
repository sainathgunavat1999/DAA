#include<stdio.h>
void jobsequencing(int n,int pid[], int profit[],int deadline[]);
int max(int deadline[],int n);
int min(int a,int b);
int min(int a,int b)
{
    if(a<b)
        return a;
    else
    {
        return b;
    } 
}
void main()
{
    int pid[10],profit[10],deadline[10],n,i,j,temp;
    printf("\nEnter number of jobs:");
    scanf("%d",&n);
    printf("\nEnter profit and deadline ");
    for(i=0;i<n;i++)
    {
        pid[i]=i+1;
        printf("\nJ%d:",i+1);
        scanf("%d",&temp);
        profit[i]=temp;
        scanf("%d",&temp);
        deadline[i]=temp;
    }
    //Sorting
    for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
      if(profit[i]<profit[j])
      {
          temp=profit[i];
          profit[i]=profit[j];
          profit[j]=temp;

          temp=pid[i];
          pid[i]=pid[j];
          pid[j]=temp;

          temp=deadline[i];
          deadline[i]=deadline[j];
          deadline[j]=temp;
      }
    jobsequencing(n,pid,profit,deadline);
}
int max(int deadline[],int n)
{
    int temp,i;
    temp=deadline[0];
    for(i=0;i<n;i++)
    {
        if(deadline[i]>temp)
        temp=deadline[i];
    }
    return temp;
}
void jobsequencing(int n,int pid[], int profit[],int deadline[])
{
    int max_deadline=max(deadline,n);
    int j,i,k,sequence[max_deadline],max_profit=0;
    int temp=max_deadline,filled=0;
    for(i=1;i<=max_deadline;i++)
    {
        sequence[i]=-1;
    }
    for(i=1;i<=n;i++)
    {
      k=min(max_deadline,deadline[i-1]); 
      while(k>=1)
      {
          if(sequence[k]==-1)
          {
              sequence[k]=pid[i-1];
              max_profit+=profit[i-1];
              filled++;
              break;
          }
          k--;
      } 
      if(filled==max_deadline)
      break;
    }
    printf("\nSequence is:");
    for(i=1;i<=max_deadline;i++)
    printf("%d  ",sequence[i]);
    printf("\nMaximum profit is:%d",max_profit);
}