#include<stdio.h>
int fib_rec(int n)
{
    if(n==1||n==2)
    {
        return n;
    }
    else
    {
        return fib_rec(n-1)+ fib_rec(n-2);
    }
}
void main()
{
  int number;
  scanf("%d",&number);
  printf("%d",fib_rec(number));
}
