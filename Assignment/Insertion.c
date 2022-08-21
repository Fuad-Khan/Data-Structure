#include<stdio.h>
int main()
{
    int i,a[100]={22,33,66,88,11},position,newvalue, n =5;

    printf(" elements in array : \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("Which Position? ");
    scanf("%d",&position);
    printf("Enter the value");
    scanf("%d",&newvalue);

    for(i=n-1;i>=position-1;i--){

        a[i+1]=a[i];
    }
    a[position-1]=newvalue;
    printf("\n");
 for(i=0;i<n+1;i++)
        printf("%d\t", a[i]);
}
