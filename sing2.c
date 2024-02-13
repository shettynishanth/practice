#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *left,*right;
};
typedef struct node *nodeptr;
nodeptr list,p,temp;



nodeptr getnode()
{
    nodeptr p=(nodeptr)malloc(sizeof(struct node));
    return p;
}
void insertf(int x)
{
    p=getnode();
    p->left=NULL;
    p->info=x;
    if(list==NULL)
    {
        list=p;
        p->right=NULL;
    }
    else
    {
        list->left=p;
        p->right=list;
        list=p;
    }
    printf("inserted");

}

void insertLast (int x)
{
    p = getnode();
    p->info =x;
    p->right = NULL;
    if (list == NULL)
    {
        list=p;
        list->left = NULL;
    }
    else
    {
        temp=list;
        while(temp->right != NULL)
            temp = temp->right;
        temp->right = p;
        p->left = temp;
    }
    printf ("%d inserted succesfully!!!",x);
}

void display ()
{
    p = list;
    if (p == NULL)
        printf("LL Emptyyy.\n");
    else
    {
        printf ("Linked List : ");
        while (p != NULL)
        {
            printf ("%d ", p->info);
            p = p->right;
        }
    }
}
void main()
{
    int x;
    printf("enter the value\n");
    scanf("%d",&x);
    insertf(x);
    insertLast(x);
        display();


}
