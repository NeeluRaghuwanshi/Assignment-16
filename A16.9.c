//to accept a matrix and determine whether it is a sparse matrix
#include<stdio.h>
int main()
  { int n1,n2,a[10][10],i,j,c=0;
    printf("Enter the number of rows\n");
    scanf("%d",&n1);
    printf("Enter the number columns\n");
    scanf("%d",&n2);
    printf("Enter the values of matrix\n");
    for(i=0;i<n1;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&a[i][j]);
    printf("Matrix is\n");
     for(i=0;i<n1;i++)
       {
        for(j=0;j<n2;j++)
           {
            printf("%d ",a[i][j]);
           }
           printf("\n");
       }
    for(i=0;i<n1;i++)
        {for(j=0;j<n2;j++)
        {
         if(a[i][j]==0)
         c++;
        }
        }
    if(c > (n1*n2)/2)
      printf("Given matrix is sparse matrix\n");
    else
      printf("Given matrix is not a sparse matrix\n");

    return 0;

 }

