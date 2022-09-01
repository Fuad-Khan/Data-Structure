#include <stdio.h>
int main()
{
int i, min, max, mid, n, item, array[100];
printf("Enter number of elements\n");
scanf("%d",&n);

printf("Enter %d integers\n", n);
for(i = 0; i < n; i++)
{
scanf("%d",&array[i]);
}
printf("Enter value to find\n");
scanf("%d", &item);

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