#include <stdio.h>
#define MAX 10

int queue[MAX];

int front=-1;
int rear=-1;

void push(int val){
    if(rear==MAX-1){
        printf("stack is overflow no more push operation can be done");
        
    }
    else if(front==-1&&rear==-1){
        front++;
        rear++;
        queue[rear]=val;
    }
    else{
        queue[++rear]=val;
    }
}
void pop(){
    if(front==-1||rear==-1){
        printf("stack underflow cant pop");
    }
    else{
        rear--;
    }
}
void peek(){
    if(rear==-1){
        printf("stk empty\n");
        
    }
    printf("%d\n",queue[rear]);

}
void display(){
    for(int i = front;i<=rear;i++){
        printf("%d\n",queue[i]);
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
