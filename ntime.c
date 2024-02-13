#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i=i+2)
    {
     printf("%d\t",i);
    }
}
