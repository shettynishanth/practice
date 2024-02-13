#include<stdio.h>
#define QSIZE 2

struct queue
{
    int rear,front;
    struct employee
    {
        int eno;
        char name,desi;

    }emp[QSIZE];
}q;

void enqueu();
void deque();
void display();

int main()
{
    int c,ch;
    q.front=0;
    q.rear=-1;
    do
    {
        printf("1.enqueu 2.deqye 3.dislay\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            enqueu();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;

        default :printf("invalid");

        }
        }while(c!=4);
       return 0;

}


void enqueu()
{
    if(q.rear==QSIZE)
        printf("overflow\n");
    else
    {


        q.rear++;
        printf("eno name des\n");
        scanf("%d %s %s",&q.emp[q.rear].eno,&q.emp[q.rear].name,&q.emp[q.rear].desi);

        printf("insert\n");
}
}

void deque()
{
    if(q.front>q.rear)
        printf("empty");
    else
    {
        printf("eno name desi\n");
        printf("%d %s %s\n",q.emp[q.front].eno,q.emp[q.front].name,q.emp[q.front].desi);
        q.front++;
        printf("delete");
    }
}
void display()
{
    if(q.rear<q.front)
        printf("empty");
    else
    {
        for(int i=q.front;i<=q.rear;i++)
        printf("%d %s %s\n",q.emp[i].eno,q.emp[i].name,&q.emp[i].desi);
    }
}
