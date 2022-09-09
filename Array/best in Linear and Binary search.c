#include<stdio.h>
int main()
{
    int i, j, a[10], search, countL=0, countB=0, min, max, mid, tmp; 
    //countL=linear search counter, countB=Binary search counter
    
    printf("Enter 10 integers in array:\n");
    
    for (i=0; i<10; i++)
    {
        printf("Index-%d: ",i);
        scanf("%d",&a[i]);//taking user input for array
    }

    printf("\nEnter the element to be searched for:");
    scanf("%d",&search); //taking user input for searching
    printf("\n");
    
    printf("Linear search:\n");
    printf("~~~~~~~~~~~~~~\n");
    for(i=0;i<10;i++)
    {
        countL++;
        if (search==a[i])
        {
            printf("The element '%d' is found at index %d.",search,i);
            break;
        }
    }
    
    if(i==10)
    {
        printf("\nThe element '%d' is not found.",search);
        countL=10; //complexity of linear search is 'n', where n is the total number of elements
    }
    printf("\nTimes of linear search=%d",countL);
    printf("\n\n");
    
    printf("Binary search:\n");
    printf("~~~~~~~~~~~~~~\n");
    
    //Step-1: Sorting
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[j] <a[i])
            {
                tmp = a[i]; //assigning a[i] into temporary variable 'tmp'
                a[i] = a[j]; //swap
                a[j] = tmp;
            }
        }
    }
    printf("Elements of array sorted in ascending order:\n");
    for(i=0; i<10; i++)
    {
        printf("Index-%d: ",i);
        printf("%d\n", a[i]); //printing sorted array
    }
            printf("\n");
            
    //Step-2: Counting required mids & searching for the element
    min=0;
    max=9;
    mid=(min+max)/2; //counting mid1
    countB++; //updating counter as mid1 is already processed
    
    while(min<=max)
    {
        
        if (a[mid]==search)
        {
            printf("The element '%d' is found at index %d.",search,mid);
            break;
        }
        if(a[mid]>search)
        {
            max=mid-1;
            mid=(min+max)/2;
            countB++;
            
            if(a[mid]==search)
            {
               printf("The element '%d' is found at index %d.",search,mid);
               break; 
            }
        }
        if(a[mid]<search)
        {
            min=mid+1;
            mid=(min+max)/2;
            countB++;
            
            if(a[mid]==search)
            {
               printf("The element '%d' is found at index %d.",search,mid);
               break; 
            }
        }
        
    }
    
    if(min>max)
    {
        printf("\nThe element '%d' is not found.",search);
        countB=4; //for 10 elements, 'n' times of binary search are required; where 2^n>=10 & n is the least value
    }
    printf("\nTimes of binary search=%d",countB);
    printf("\n");
    
    if(countB<countL)
    {
        printf("\nBinary search is more efficient in this case."); //as it requires less times of traversal 
    }
    else if(countB>countL)
    {
        printf("\nLinear search is more efficient in this case."); //as it requires less times of traversal
    }
    else
    {
        printf("\nBoth searches are equally efficient in this case."); //as it requires equal times of traversal
    }
    return 0;
}