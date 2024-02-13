#include<stdio.h>

void fact(int n)
{
    int i,b;
    for(i=1;i<=n;i++)
    {

        b=n*i;
        printf("%d");
    }
}

void main()
{
    int a;
    scanf("%d",&a);
    fact(a);
}
