//find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
   {
       int a[3][3],i,j,sr=0,sc=0;
       printf("Enter values of matrix\n");
       for(i=0;i<3;i++)
         for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
       for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
            {
            sr=sr+a[i][j];
            }
          printf("sum of row is %d\n",sr);
          sr=0;
        }

        for(j=0;j<3;j++)
        {
          for(i=0;i<3;i++)
            {
            sc=sc+a[i][j];
            }
          printf("sum of column is %d\n",sc);
          sc=0;
        }
         return 0;

   }
