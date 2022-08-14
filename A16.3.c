//program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
  { int n1,n2,a[10][10],i,j,t[10][10];
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
        for(j=0;j<n2;j++)
            t[j][i]=a[i][j];

    printf("Transpose is:\n");
    for(i=0;i<n2;i++)
       {
        for(j=0;j<n1;j++)
           {
            printf("%d ",t[i][j]);
           }
           printf("\n");
       }
    return 0;

    }
