#include<stdio.h>  
#include<malloc.h>  
void beginsert(int);  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("Enter the item which you want to insert :\n");  
        scanf("%d",&item);  
        beginsert(item);  
        printf("Press 0 to insert more :\n");  
        scanf("%d",&choice);  
    }
	while(choice == 0);  
}  
void beginsert(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("OVERFLOW :\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("Node inserted :\n");  
        }  
          
    }
