#include<stdio.h>
void main()
{
 int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
 printf("Enter rows and columns of first matrix:");
 scanf("%d%d",&m,&n);
 printf("Enter rows and columns of second matrix:");
 scanf("%d%d",&p,&q);
 if(n==p)
 {
  printf("\nEnter first matrix:\n");
  for(i=0;i<m;++i)
    for(j=0;j<n;++j)
        scanf("%d",&a[i][j]);

   printf("\nEnter second matrix:\n");
   for(i=0;i<p;++i)
     for(j=0;j<q;++j)
        scanf("%d",&b[i][j]);
    printf("\nResult is:\n");
    for(i=0;i<m;++i)
    {
        for(j=0;j<q;++j)
        {
            c[i][j]=0;
            for(k=0;k<n;++k)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
 }
 else
    printf("Number of columns of first matrix is not equal to number of rows of second matrix hence multiplication is not possible.");
}
