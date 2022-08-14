//program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
 {
   int a[3][3]={0,0,0,1,1,1,1,1,0};
   int i,j,max=-1,c,s;
   for(i=0;i<3;i++)
   { c=0;
     for(j=0;j<3;j++)
     {
       if(a[i][j]==1)
       {
           c++;
       }

     if(max<c)
      {
        s=i;
        max=c;
      }
     }
   }
   printf("%d",s);
   return 0;
   }
