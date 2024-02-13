#include<stdio.h>

int small(int n1,int n2)
{
    if(n1<n2)
    {
        return n2;
    }
    else
    {
        return n1;
    }
}

void main()
{
    int a,b,q,n3,n1;
    scanf("%d%d",&a,&b);
    n3= small(a,b);
    printf("%d",n3);
}
