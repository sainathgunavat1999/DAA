#include<stdio.h>
float knapsack(int n,float capacity,float weight[],float profit[],float ratio[]);
void main()
{
    float profit[10],weight[10],ratio[10],capacity,temp;
    int i,j,n;
    printf("\nEnter number of objects:");
    scanf("%d",&n);
    printf("\nEnter size of knapsack:");
    scanf("%f",&capacity);
    printf("\nEnter profit and weight:");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&profit[i],&weight[i]);
        ratio[i]=profit[i]/weight[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[i]>ratio[j])
            {
                temp=ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;
                
                temp=profit[i];
                profit[i]=profit[j];
                profit[j]=temp;
                
                temp=weight[i];
                weight[i]=weight[j];
                weight[j]=temp;
            }
        }
    }
    temp=knapsack(n,capacity,weight,profit,ratio);
    printf("\nMaximum profit is=%.2f",temp);
}

float knapsack(int n,float capacity,float weight[],float profit[],float ratio[])
{
    int i;
    float total_profit=0.0,u,x[10]={0.0},temp;
    u=capacity;
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
            break;
        else
        {
            x[i]=1.0;
            u=u-weight[i];
            printf("\n%d item of weight %f added to knapsack.",i+1,weight[i]);
            total_profit+=profit[i];
        }
        
    }
    if(u!=0)
    {
        for(i=0;i<n;i++)
        {
            if(x[i]!=1.0)
            {
                temp=u/weight[i];
                printf("\n%d item of weight %.2f added to knapsack.",i+1,temp);
                total_profit+=profit[i]*temp;
            }
            
        }
    }
    return total_profit;
}
