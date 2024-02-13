#include<stdio.h>
int whileloop(int n1,int n2,int n3,int n4,int n5,int n6)
{
    while(n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6)
    {
        return n1;
    }
    while(n2>n1&&n2>n3&&n2>n4&&n2>n5&&n2>n6)
    {
        return n2;
    }
    while(n3>n1&&n3>n2&&n3>n4&&n3>n5&&n3>n6)
    {
        return n3;
    }
    while(n4>n1&&n4>n2&&n4>n3&&n4>n5&&n4>n6)
    {
        return n4;
    }
    while(n5>n1&&n5>n2&&n5>n3&&n5>n4&&n5>n6)
    {
        return n5;
    }
    while(n6>n1&&n6>n2&&n6>n3&&n6>n4&&n6>n5)
    {
        return n6;
    }

}

int forloop(int n1,int n2,int n3,int n4,int n5,int n6)
{
    for(;n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6;)
    {
      return n1;
    }
    for(;n2>n1&&n2>n3&&n2>n4&&n2>n5&&n2>n6;)
    {
        return n2;
    }
    for(;n3>n1&&n3>n2&&n3>n4&&n3>n5&&n3>n6;)
    {
        return n3;
    }
    for(;n4>n1&&n4>n2&&n4>n3&&n4>n5&&n4>n6;)
    {
        return n4;
    }
    for(;n5>n1&&n5>n2&&n5>n3&&n5>n4&&n5>n6;)
    {
        return n5;
    }
    for(;n6>n1&&n6>n2&&n6>n3&&n6>n4&&n6>n5;)
    {
        return n6;
    }

}
void main()
{
    int n1,n2,n3,n4,n5,n6;
    scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
    whileloop(n1,n2,n3,n4,n5,n6);
    printf("%d\n\n", whileloop(n1,n2,n3,n4,n5,n6));
    forloop(n1,n2,n3,n4,n5,n6);
    printf("%d\n", forloop(n1,n2,n3,n4,n5,n6));

}
