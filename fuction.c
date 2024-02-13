#include<stdio.h>

int sum()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}

int fact()
{
    int a=1,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=a*i;
    }
    return a;

}

int min()
{
    int m1,m2,m3;
    m3=m1-m2;
    printf("%d",m3);
    return m3;

}

void main()
{
    int d,q,n1,n2,min1,total;
    d=sum();
    printf("%d\n",d);
    q=fact();
    printf("%d\n",q);

    scanf("%d%d",&n1,&n2);
    min1=min();

    printf("%d",&min1);
    total=d+q+min1;
    printf("%d",total);


}
