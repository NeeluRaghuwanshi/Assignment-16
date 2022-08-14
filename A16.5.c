//program in C to find the sum of left diagonal of a matrix
#include<stdio.h>
int main()
  {
    int a[3][3],i,j,s=0;
    printf("Enter values of matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          if(i==j)
          s=s+a[i][j];
      }
    }
     printf("sum of left diagonal is: %d",s);
     return 0;
     }
