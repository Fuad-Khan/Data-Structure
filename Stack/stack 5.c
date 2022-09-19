#include<stdio.h>
#define size 5
char stack[size];
int top=-1;
void push(){
if(top<size){
	char num;
	top=top+1;
	printf ("Enter the element to be pushed\n");
    scanf ("%s", &num);
    stack[top]=num;
}
else{
	printf("Stack Overflow");
}}
int pop(){
	if(top>-1){
		char del;
		del=stack[top];
		top=top-1;		
	printf("\nDeleted %c\n",del);
	}
	else{
		printf("\nDon't do overflow\n");
	}
}
void show(){
	int i;
if(top==-1){
	printf("The stack is empty\n");
}
else{
	printf("Elements of stack are\n");
			i=top;
	for(int i=top;i>=0;--i){
		printf("%c\t",stack[i]);
	}
}
}
int main(){
	int opt,loop=1;
	while(loop){
		printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");
        printf ("Enter your choice\n");
        scanf    ("%d", &opt);
        switch(opt){
        case 1:
        	push();
        	break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            return 0;	
		}
		 fflush (stdin);
		printf ("Do you want to continue(Type 1 if yes and 0 if no)?\n");
        scanf    ("%d", &loop);
	}
	return 0;
}