
#include<stdio.h>
int main(){

    int i,num[]={33,20,15,5,8,50};
    int value1= 15,value2= 8, value3=33;
    int choice;

    int pos= -1;
    for(i=0;i<6;i++){
        if(value1==num[i]){
            pos=i+1;
            printf("%d is in position %d\n", value1, pos);
        }
            if(value2==num[i]){
            pos=i+1;
            printf("%d is in position %d \n", value2, pos);
        }

            if(value3==num[i]){
            pos=i+1;
            printf("%d is in position %d\n", value3, pos);
            
        }

    }  

    printf("\n\n");
    printf("MENU\n");
    printf("1. To Delete Found Element\n");
    printf("2. Exit\n");
    printf("Enter YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for(i=pos-1;i<6-1;i++){
            num[i]=num[i+1];
        }
        printf("Array: \n");
        for(i=0;i<3;i++){
            printf("%d\t", num[i]);
        }
        break;
    
    case 2:
    printf("Thanks for your input");
    break;
    
    default: printf("Wrong Input");
        break;
    }

    return 0;
}