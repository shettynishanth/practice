#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
void linktrvals(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }
}
struct Node *insertfirst(struct Node *head,int data)
{
   struct Node* ptr=struct Node*)malloc(sizeof(struct Node));
   ptr->next=head;
   ptr->data=data;
   return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;
    second->data=33;
    second->next=third;
    third->data=56;
    third->next=NULL;
    linktrvals(head);

    insertfirst(head);
    return 0;
}
