#include <stdio.h>

void towerofH(int n,char from,char aux,char to){
    if(n==1){
        printf("move 1 disc from %c to %c\n",from,to);
        return;
    }

    towerofH(n-1,from,to,aux);
    printf("move %d disc from %c to %c\n",n,from,to);
    towerofH(n-1,aux,from,to);
}

int main(){
   int n;
   printf("enter the number of disc:\n");
   scanf("%d",&n);

   char f;
   printf("enter from where to move:\n");
   scanf(" %c",&f);

   char aux;
   printf("enter which to use as auxiliary:\n");
   scanf(" %c",&aux);

   char t;
   printf("enter destination rod:\n");
   scanf(" %c",&t);

   towerofH(n,f,aux,t);

   return 0;
}
