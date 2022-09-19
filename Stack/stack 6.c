#include<stdio.h>
int main()
{
    char a[5],c,item;
    int top=-1;
    int i;
        printf ("\nEnter 3 elements 'o', 'g', 's' in an order:-\n");
        for(i=0; i<3; i++)
        {
            scanf (" %c", &a[i]);
            top++;
        }
    printf("\nArray after insertion:-");
    for(i=0; i<3; i++)
    {
        printf(" %c",a[i]);
    }
    a[top]=item;
    top--;

    printf("\nThe last element got deleted & the array is:\n");
    for(i=0; i<5; i++)
    {
        printf("%c\n",a[i]);
    }
    printf("\nArray after deletion :-");
    for(i=0; i<3; i++)
    {
        printf(" %c",a[i]);
    }
    printf("\n Insert two elements 'n' & 'z' in an order:-\n");
    for(i=top+1; i<4; i++)
    {
        scanf (" %c", &a[i]);
        top++;
    }
    printf("\nArray after insertion:-");
    for(i=0; i<4; i++)
    {
        printf(" %c",a[i]);
    }
    a[top]=item;
    top--;

    printf("\nThe last element got deleted & the array is:\n");
    for(i=0; i<5; i++)
    {
        printf("%c\n",a[i]);
    }
    printf("\n Insert two elements 'a' & 'j' in an order:-\n");
    for(i=top+1; i<5; i++)
    {
        scanf (" %c", &a[i]);
        top++;
    }
    printf("\nArray after insertion:-");
    for(i=0; i<4; i++)
    {
        printf(" %c",a[i]);
    }
    a[top]=item;
    top--;

    printf("\nThe last element got deleted & the array is:\n");
    for(i=0; i<5; i++)
    {
        printf("%c\n",a[i]);
    }
    printf("\nInsert 1 elements 'm' in an order:-\n");
    for(i=top+1; i<5; i++)
    {
        scanf (" %c", &a[i]);
        top++;
    }
    printf("\nArray after insertion:-");
    for(i=0; i<6; i++)
    {
        printf(" %c",a[i]);
    }


    printf("Do you want to insert some other char ?\n\t1.YES\n\t0.NO ");
    int n;
    while(scanf("%d", &n) && n) {
        printf("Don't do Overflow \n");
    }
    for(int i = 4; i >= 0; i--) {
        printf("%c", a[i]);
    }
    printf("\n");

}