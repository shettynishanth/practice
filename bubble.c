#include<stdio.h>
int bubble(int *a,int n)
{
    int temp;
    int i,j;
    for(i=0;i<=n-1;i++)
        for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    return 0;
}
int main()
{
    int n,i,a[n];
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    bubble(a,n);
    printf("sorting number\n");
    for(i=0;i<n;i++)
    {
         printf("%d",a[i]);
    }
    return 0;

}
