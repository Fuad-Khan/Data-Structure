#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
    typedef struct node
    {
        int num, pt;
        int *ptr;
    } x;

    x *head = 0, *temp = 0, *newnode = 0;

    int choice = 1;

    while (choice != 0) 
    {
        newnode = (x *)malloc(sizeof(x));
        printf("Enter the num and pt: \n");
        scanf("%d%d", &newnode->num, &newnode->pt);
        if (head != 0)
        {
            temp->ptr = newnode;
            temp = newnode;
        }
        else
        {
            head = temp = newnode;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);
    }
    temp->ptr = 0;
    temp = head;
    printf("\nStatus of the linked list is\n");
    while (temp != 0)
    {
        printf("[%d][%d] -> ", temp->num, temp->pt);

        temp = temp->ptr;
    }
    printf("[NULL]\n");
}