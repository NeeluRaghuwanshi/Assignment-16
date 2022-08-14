//calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
  {
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("Enter values of first matrix\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    printf("Enter values of second matrix\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
    printf("Sum is\n");
    for(i=0;i<=2;i++)
      {
          for(j=0;j<=2;j++)
         {
         sum[i][j]=a[i][j]+b[i][j];
         printf("%d ",sum[i][j]);
         }
         printf("\n");
      }
      return 0;
  }
