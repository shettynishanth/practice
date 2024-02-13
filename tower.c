#include<stdio.h>
#include<stdlib.h>
void toh(int n,char source,char temp,char def)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,temp,source,def);
}
int main()
{
    int n;
    printf("enter\n");
    scanf("%d",&n);
    toh(n,'a','b','c');
    return 0;
}
