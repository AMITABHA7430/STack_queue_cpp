#include <stdio.h>
#define MAX 10

int stk[MAX];

int top=-1;

void push(int val){
    if(top==MAX-1){
        printf("stack is overflow no more push operation can be done");
        
    }
    else{
        stk[++top]=val;
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow cant pop");
    }
    else{
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("stk empty\n");
        
    }
    printf("%d\n",stk[top]);

}
void display(){
    for(int i = top;i>=0;i--){
        printf("%d\n",stk[i]);
    }
}



int main() {
  int val,S;
  
  printf("do the opertion according to following list\n1.push into stack\n2.pop from stack\n3.peek operation\n4.display operaion\n5.exit\n");
  
  
  
  while(1){
      printf("enter your chouce:\n");
      scanf("%d",&S);
      switch(S){
          case 1:printf("enter the val:\n");scanf("%d",&val);push(val);break;
          case 2:pop();break;
          case 3:peek();break;
          case 4:display();break;
          case 5:return 0;
          
                
      }
  }
  
  

    return 0;
}
