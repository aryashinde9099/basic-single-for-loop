#include<stdio.h>
void main(){
    int i,num=1;
    printf("Product of first 10 numbers:\n");
   
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num*i,num,i);
    }
}