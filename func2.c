#include<stdio.h>

void sum(int A,int B)
{
    int i;
    for(i=A;i<=B;i++)
    {
        printf("%d\n",i);
    }
}

void main()
{
    int a,b;
    printf("first number");
    scanf("%d",&a);
    printf("second number");
    scanf("%d",&b);
    sum(a,b);
}
