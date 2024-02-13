#include<stdio.h>

int big(int n1,int n2,int n3,int n4)
{
    if(n1>n2&&n1>n3&&n1>n4)
    {
          return n1;
    }
       else if(n2>n1&&n2>n3&&n2>n4)
        {
           return n2;
        }
    else if(n3>n1&&n3>n2&&n3>n4)
    {
          return n3;
    }
        else
        {
           return n4;
        }
}

void main()
{
    int n1,n2,n3,n4,num1;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    num1=big(n1,n2,n3,n4);
    printf("%d",num1);
}
