#include<stdio.h>
#define capacity 5
char stack[capacity];
int top = -1;

void push(char x){
  if(top < capacity -1){
  top = top+1;
  stack[top]= x;
  printf("Succesfully added item: %c\n",x);
  }else{
    printf("Exception! No spaces\n");
  }
}

int pop(){
  if(top >= 0){
    int val= stack[top];
    top = top -1;
    return val;
  }
  printf("Exception from pop! Empty stack\n");
  return -1;
}

int peek(){
  if(top >= 0){
    return stack[top];
  }
  printf("Exception from peek! Epty stack\n");
  return -1;
}

int main(){
   printf("Implementing my stack in C\n");
   peek();
   push('M');
   push('a');
   push('n');
   printf("pop item: %d\n",pop());
   push('g');
    printf("Top of stack: %d\n",peek());

    int i;
    if (top == -1)
    {
        printf ("Stack is empty\n");
       
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = top; i >= 0; i--)
        {
            printf ("%s",stack[i]);
        }
    }
    printf ("\n");
   return 0;
}