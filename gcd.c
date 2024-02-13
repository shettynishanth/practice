#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n2!=0)
        return gcd(n2,n1%n2);
    else
        return n1;
}

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("%d %d gcd %d",n1,n2,gcd(n1,n2));

}
