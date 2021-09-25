
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int push(struct node **h, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = *h;
*h = temp;
    return 0;
}

void print(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void sort(struct node **h)
{
    int i,j,a;

    struct node *temp1;
    struct node *temp2;

    for(temp1=*h;temp1!=NULL;temp1=temp1->next)
    {
        for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
        {
            a = temp1->data;
            temp1->data = temp2->data;
            temp2->data = a;
        }
    }
}

int main()
{
    struct node * head = NULL;
    push(&head,5);
    push(&head,4);
    push(&head,6);
    push(&head,2);
    push(&head,9);
    printf("List is : ");
    print(head);
    sort(&head);
    printf("after sorting list is : ");
    print(head);
    return 0;
}
