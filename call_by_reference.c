#include<stdio.h>
int change(int *p );

int main(){
    int a = 10;
    int *p;
     p=&a;

    printf("Before change value:%d \n",a);
    int b=change(&a);
    printf("After change the value:%d \n",a);
    return 0;
}
int change(int *p){
*p= 20;
}