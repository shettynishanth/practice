#include<stdio.h>

int fuc(int number)
{
    if(number==0||number==1)
    {
        return 1;
    }
    else
    {
        return number*fuc(number-1);
    }
}


void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("%d  %d\n",num,fuc(num));
}
