#include<stdio.h>
void selection(int *a,int n)
{
    int i,index=0,large=a[0];
    for(int i=n-1; i>=0;i--)


    for(int j=1;j<=i; j++)
    {
        if(a[j]>large)
        {
            large=a[j];
            index=j;
        }
    }
    a[index]=a[i];
    a[i]=large;
}
int main()
{
    int n,a[n];
    printf("number");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("sorting\n");
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
