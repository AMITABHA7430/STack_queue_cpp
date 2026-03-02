#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void push(int val){
    if((rear + 1) % MAX == front){
        printf("Queue Overflow\n");
        return;
    }
    else if(front == -1){
        front = rear = 0;
    }
    else{
        rear = (rear + 1) % MAX;
    }
    queue[rear] = val;
}

void pop(){
    if(front == -1){
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % MAX;
    }
}

void peek(){
    if(front == -1){
        printf("Queue Empty\n");
        return;
    }
    printf("%d\n", queue[front]);
}

void display(){
    if(front == -1){
        printf("Queue Empty\n");
        return;
    }
    int i = front;
    while(1){
        printf("%d ", queue[i]);
        if(i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main(){
    int val, S;
    while(1){
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        scanf("%d", &S);
        switch(S){
            case 1:
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
        }
    }
}
