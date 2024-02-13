#include<stdio.h>
int fib(int a)
{
    if(a==1||a==2)
    {
        return a;
    }
    return fib(a-1)+fib(a-2);

}
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));
}
