#include<stdio.h>
void main()
{
    int n,n1,a,b,d,log;
    printf("welcome\n");
    printf("enter the pin\n");
    scanf("%d",&n);
    printf("re enter the pin");
    scanf("%d",&n1);
    if(n==n1)
        {
    printf("1 chenge pin\n");
        printf("2 login pin\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("chenge\n");
            scanf("%d",&n);
            printf("done\n");
        }
        else if(a==2)
        {
            printf(" enter login id");
            scanf("%d",&log);
            if(n==log)
            {
                printf("done");
            }
            else{
                printf("invalid pin");
            }
        }
        else
        {
            printf("enter the valid number\n");
        }
    }
    else
    {
        printf("invalid pin\n");
    }
}
