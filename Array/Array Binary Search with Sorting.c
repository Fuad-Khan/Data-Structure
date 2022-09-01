#include <stdio.h>
int main()
{
int i,j,tmp, min, max, mid, n, item, array[100];
printf("Enter number of elements\n");
scanf("%d",&n);

printf("Enter %d integers\n", n);
for(i = 0; i < n; i++)
{
scanf("%d",&array[i]);
}
printf("Enter value to find\n");
scanf("%d", &item);

 for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[j] >array[i])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted descending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n\n");

min = 0;
max = n - 1;
mid = (min+max)/2;

while (min <= max)
{
    if(array[mid]<item)
    {
        min=mid+1;
        
    }
    else if (array[mid]==item)
    {
    max=mid-1;
     printf("%d found at location %d.\n", item, mid+1);
      break;
    }
    else
    {
      max = mid - 1;
    }

    mid = (min + max)/2;
    
}
if (min > max)
    printf("Not found! %d isn't present in the list.\n", item);
return 0;
}