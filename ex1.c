#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,j,count=1;
    while(i<=10)
    {
         i++;
         if(i==11)

        {
        i=1;
        count++;
        printf("\n");
        }

        if(count==11)
        break;
        printf("%d\t",i);
    }
}
