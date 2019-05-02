#include<stdio.h>
int main()
{
	int n,i,j;
	int adjacency[10][10];
	printf("\nEnter number of nodes");
	scanf("%d",&n);
	printf("\nEnter adjacency matrix:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&adjacency[i][j]);
    
    for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(adjacency[i][j]!=0)
			{
				printf("\n(%d,%d)=%d",i+1,j+1,adjacency[i][j]);
			}

	return 0;
}
