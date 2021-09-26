#include<stdio.h>
#include<malloc.h>

struct circular
{
    int i;
    struct circular *next;
};
struct circular *temp;
struct circular *head;
struct circular *p;
struct circular *mid;
struct circular *move;

int count=0;


void create(void);
void insert(void);
void display(void);
void del(void);

void main()
{
    int ch=0;
    
    while(ch!=5)
    {
        printf("\n1.CREATE");
        printf("\n2.INSERT");
        printf("\n3.DELETE");
        printf("\n4.DISPLAY\n");
        scanf("%d",&ch);
        
      if(ch==1)
        {
            create();
            count++;
            count++;
        }

      if(ch==2)
        {
            insert();
            count++;
        }
      if(ch==3)
        {
            del();
            count--;
        }

        if(ch==4)
        {
            display();
        }

        if(ch==5)
        {
            break;
        }
    }
    getch();
}
void create()
{
    head=(struct circular *)malloc(sizeof(struct circular));
    head->next=head;
    printf("ENETER THE DATA");
    scanf("%d",&head->i);
    temp=head;

    temp->next=(struct circular *)malloc(sizeof(struct circular));
    temp=temp->next;
    temp->next=head;
    printf("ENTER THE DATA");
    scanf("%d",&temp->i);

}
void insert()
{
    int add,t;

    printf("\n\t ENTER ANY NUMBER BETWEEN 1 AND 5 ",count);
    scanf("%d",&add);
    p=head;
    t=1;
    while(t<add)
    {
        p=p->next;
        t++;
    }
    printf("%d",p->i);
    mid=(struct circular *)malloc(sizeof(struct circular));
    printf("ENETER THE DATA");
    scanf("%d",&mid->i);
    mid->next=p->next;
    p->next=mid;
}

void display()
{
    p=head;
    printf("%d-->",p->i);
    p=p->next;
    while(p!=head)
    {
        printf("%d-->",p->i);
        p=p->next;
    }
}

void del(void)
{
    int add,t;

    printf("\n\t ENTER ANY NUMBER BETWEEN 1 AND %d",count);
    scanf("%d",&add);
    p=head;
    t=1;
    while(t<add-1)
    {
        p=p->next;
        t++;
    }
    printf("%d",p->i);
    mid=p->next;
    p->next=mid->next;
}
