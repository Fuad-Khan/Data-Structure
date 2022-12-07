/**
 * C program to delete a node from Doubly linked list
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Basic structure of Node
 */
struct node {
    char * data[100];
    struct node * prev;
    struct node * next;
}*head, *last;

/*
 * Functions used in this program
 */
void createList(int n);
void displayList();
void deleteFromBeginning();


int main()
{
    int n,  choice=1;
    char data[100];

    head = NULL;
    last = NULL;

    /*
     * Run forever until user chooses 0
     */
    while(choice != 0)
    {
        printf("============================================\n");
        printf("DOUBLY LINKED LIST PROGRAM\n");
        printf("============================================\n");
        printf("1. Create List\n");
        printf("2. Delete node - from beginning\n");
        printf("3. Display list\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                deleteFromBeginning();
                break;
            case 3:
                displayList();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-3");
        }

        printf("\n\n\n\n\n");
    }

    return 0;
}



/**
 * Creates a doubly linked list of n nodes.
 * n Number of nodes to be created
 */
void createList(int n)
{
    int i;
    char data[100];
    struct node *newNode;

    if(n >= 1)
    {
        /*
         * Creates and links the head node
         */
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%s", &data);

        strcpy(head->data,data);
        head->prev = NULL;
        head->next = NULL;

        last = head;

        /*
         * Create and link rest of the n-1 nodes
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%s", &data);

            strcpy(newNode->data,data);
            newNode->prev = last; // Link new node with the previous node
            newNode->next = NULL;

            last->next = newNode; // Link previous node with the new node
            last = newNode; // Make new node as last node
        }

        printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}


/**
 * Display the content of the list from beginning to end
 */
void displayList()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %s\n", n, temp->data);

            n++;

            /* Move the current pointer to next node */
            temp = temp->next;
        }
    }
}


/**
 * Delete or remove the first node of the doubly linked list
 */
void deleteFromBeginning()
{
    struct node * toDelete;

    if(head == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        toDelete = head;

        head = head->next; // Move head pointer to 2 node

        if (head != NULL)
            head->prev = NULL; // Remove the link to previous node

        free(toDelete); // Delete the first node from memory
        printf("SUCCESSFULLY DELETED NODE FROM BEGINNING OF THE LIST.\n");
    }
}


