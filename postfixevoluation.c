#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stk[MAX];

int top=-1;

void push(int val){
    stk[++top]=val;
}

void pop(){
    if(top==-1){
        return;
    }
    else{
        top--;
    }
}

void display(){
    printf("%d",stk[top]);
}

int main() {

    char postfix[MAX];

    printf("enter the postfix expression ");
    int i=0;

    scanf("%s",postfix);

    while(postfix[i]){

        if(isdigit(postfix[i])){
            push(postfix[i]-'0');
        }

        else{

            if(postfix[i]=='+'){
                int res=stk[top-1]+stk[top];
                pop();
                pop();
                push(res);
            }

            if(postfix[i]=='-'){
                int res=stk[top-1]-stk[top];
                pop();
                pop();
                push(res);
            }

            if(postfix[i]=='*'){
                int res=stk[top-1]*stk[top];
                pop();
                pop();
                push(res);
            }

            if(postfix[i]=='/'){
                int res=stk[top-1]/stk[top];
                pop();
                pop();
                push(res);
            }

            if(postfix[i]=='^'){
                int res=stk[top-1]^stk[top];
                pop();
                pop();
                push(res);
            }
        }

        i++;
    }

    display();

    return 0;
}
