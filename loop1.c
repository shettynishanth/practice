#include<stdio.h>
void main()
{
    int n,mul,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mul=n*i;
        printf("%d * %d=%d",n,i,mul);
    }
}
