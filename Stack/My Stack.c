#include<stdio.h>
#define capacity 5
int stack[capacity];
int top = -1;

void push(int x){
  if(top < capacity -1){
  top = top+1;
  stack[top]= x;
  printf("Succesfully added item: %d\n",x);
  }else{
    printf("Exception! No spaces\n");
  }
}

int pop(){
  if(top >= 0){
    int val= stack[top];
    
    top = top -1;
    printf("Succesfully deleted item: %d\n",val);
  }
  else
  printf("Exception from pop! Empty stack\n");
  
}

int main(){
    int i;
   push(10);
   push(20);
   pop();
   push(30);
   pop();
   push(40);

    printf ("\n The status of the stack is \n");
        for (i = top; i >= 0; i--)
        {
            printf ("%d\t", stack[i]);
        }
   return 0;
}