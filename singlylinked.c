#include<stdio.h>
#include<stdlib.h>

struct node
{
    int eno;
    char name[15],desi[14],doj[15];
    float salary;
    struct node *next;
};

typedef struct node *nodeptr;
nodeptr list,p,temp;

nodeptr getnode()
{
    nodeptr p=(nodeptr)malloc(sizeof(struct node));
    return(p);
}

void insert()
{
    p=getnode();
    printf("enter the emp");
    scanf("%d%s%s%s%f",&p->eno,&p->name,&p->desi,&p->doj,&p->salary);
    p->next=NULL;
    if(list==NULL)
    {
        list=p;
    }
    else
    {
        temp=list;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=p;
    }
    printf("succesfull");
}

void delete()
{
    if(p==NULL)
    {
        printf("empty");
    }
    else
    {
        p=list;
        list=p->next;
        p->next=NULL;
        printf("%d%s%s%s%f",&p->eno,&p->name,&p->desi,&p->doj,&p->salary);
        free(p);
    }
}

void dispaly()
{
    p=list;
    while(p!=NULL)
    {

        printf("%d %s %s %s %f",p->eno,p->name,p->desi,p->doj,p->salary);
        p=p->next;
    }
}

int main()
{
    int v,c;
    int i=0;
    list=NULL;
    do
    {
        printf("1.insert 2.delete 3.display\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:insert();
                break;
            case 2:dispaly();
                break;
            case 3:delete();
                break;
        }
    }while(c!=4);
}
