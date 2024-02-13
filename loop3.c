#include<stdio.h>
void main()
{
    int m,n,i,multi=1,j=1;

    printf("enter the end number");
    scanf("%d",&n);
       for(i=1;i<=10;i++)
        {
         for(j=1;j<=n;j++)
         {
          multi=n*i;
          printf("%d*%d=%d\n",n,i,multi);
         }
        }
}
