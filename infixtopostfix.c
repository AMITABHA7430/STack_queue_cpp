// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stak[MAX];
int r=-1;

void push(char val){
    stak[++r]=val;
}

char pop(){
    if(r==-1){
        return -1;
    }
    else{
        return stak[r--];
    }
}

int priority(char x){
    if(x=='('||x==')'){
        return 0;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
    if(x=='*'||x=='/'){
        return 2;
    }
    if(x=='^'){
        return 3;
    }
    return -1;
}

int main() {

    char infix[MAX];
    char postfix[MAX];

    printf("enter the infix expression: ");
    scanf("%s",infix);

    int i=0,j=0;

    while(infix[i]){

        if(isalnum(infix[i])){
            postfix[j++]=infix[i];
        }
//here "("")" isssue it can be fix by wiritting seperate condition for ()/////////////
        else{

            if(r==-1){
                push(infix[i]);
            }

            else{

                if(priority(infix[i])>priority(stak[r])){
                    push(infix[i]);
                }

                else{

                    while(r!=-1){
                        postfix[j++]=stak[r];
                        pop();
                    }

                    push(infix[i]);
                }
            }
        }

        i++;
    }

    while(r!=-1){
        postfix[j++]=stak[r];
        pop();
    }

    postfix[j]='\0';

    printf("postfix expression: %s",postfix);

    return 0;
}
