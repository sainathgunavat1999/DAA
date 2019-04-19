#include<stdio.h>
int main()
{
	int processid[50],startTime[50],finishTime[50];
	int n,i,j,temp;
	printf("\nEnter number of activities:");
	scanf("%d",&n);
	printf("\nEnter startTime and finishTime:");
	for(i=0;i<n;i++)
	{
		printf("\nL%d:",i+1);
		processid[i]=i+1;
		scanf("%d",&startTime[i]);
		scanf("%d",&finishTime[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(finishTime[j]>finishTime[j+1])
			{
				temp=finishTime[j];
				finishTime[j]=finishTime[j+1];
				finishTime[j+1]=temp;

				temp=startTime[j];
				startTime[j]=startTime[j+1];
				startTime[j+1]=temp;

  				temp=processid[j];
				processid[j]=processid[j+1];
				processid[j+1]=temp;
			}
		}
	}
	i=0;
	printf("\nL%d  ",processid[0]);
	for(j=1;j<n;j++)
	{
		if(startTime[j]>=finishTime[i])
		{
			printf("L%d  ",processid[j]);
			i=j;
		}
	}
    return 0;
}
