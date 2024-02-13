#include<stdio.h>
void tower(int n,char source,char axe,char des)
{
    if(n==1)
    {


        printf("move to 1 disk %c %c\n",source,des);
        return;
    }
    tower(n-1,source,des,axe);
    printf("%d %c %c\n",n,source,des);
    tower(n-1,axe,source,des);
}
int main()
{
    int n;
    scanf("%d",&n);
    tower(n,'S','A','D');
}
