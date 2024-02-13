#include<stdio.h>
void main()
{
    int n,n1,n2;

    scanf("%d",&n);
    do
    {
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1<n&&n2<n)
    {
    for(int i=0;i<n1;i++)
    {
        printf("%d",i);
    }
    for(int j=n2;j<n;j++)
    {
        printf("%d\n",j);
    }
    }
    }while(n<n2);
}
