// Online C compiler to run C program online
#include <stdio.h>
#define MAX 6
int stk[MAX];
int top=-1;
void push(int val){
    if(top==MAX-1){
        printf("stk overflow\n");
    }
    stk[++top]=val;
   
}
void pop(){
    if(top==-1){
        printf("stk is empty\n");
        
    }
    top--;
}
void peek(){
    if(top==-1){
        printf("stk empty\n");
        
    }
    printf("%d\n",stk[top]);
}
void Display(){
    int ami=top;
    while(ami>=0){
        printf("%d\n",stk[ami]);
        ami--;
    }
}
int main() {
 push(10);
 push(20);
 push(30);
 
 Display();
 printf("amitabha\n");
 
 pop();
 peek();
 Display();
    

    return 0;
}
