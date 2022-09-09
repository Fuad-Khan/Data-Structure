#include <stdio.h>
int main()
{
    int ar[10]={19,23,25,76,45,87,66,34,12,99}, i, j, k, search;
    printf("Enter 10 integers\n");

    printf("The elements in the array are\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", ar[i]);
    }
    printf("\nEnter the element that needs to be found=");
    scanf("%d", &search); 

    printf("\n____Linear search____ \n");
    for (k = 0; k < 10; k++)
    {
        if (ar[k] == search)
        {
            printf("%d is located in number %d position \n Its index is %d\n", ar[k], k + 1, k);
            break;
        }
    }
    if (k >= 10)
    {
        printf("\nElement not found\n");
    }

    printf("\n____Binary search____\n");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (ar[i] > ar[j])
            {
                k = ar[i];
                ar[i] = ar[j];
                ar[j] = k;
            }
        }
    }
    printf("\nThe elements in the array after sorting are\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", ar[i]);
    }
    int min = 0, max = 9, mid, flag = 1;
    mid = (max + min) / 2;
    while (min <= max)
    {
        mid = (max + min) / 2;
        if (ar[mid] == search)
        {
            printf("\n%d is located at at number %d position \nAnd it's new index is %d", search, mid + 1, mid);
            flag = 0;
            break;
        }
        else if (ar[mid] > search)
        {
            max = mid - 1;
        }
        else if (ar[mid] < search)
        {

            min = mid + 1;
        }
    }
    if (min > max)
    {
        printf("\nEntemnt not fount!\n");
    }
    printf("\n **********\\\\\\\\ Binary search is more efficient than the linear search in the case of large data sets/////////************");
}