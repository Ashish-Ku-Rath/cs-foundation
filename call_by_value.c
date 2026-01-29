#include<stdio.h>
int change(int a );

int main(){
    int a = 10;
    printf("Before change value:%d \n",a);
    change(a);
    printf("After change the value:%d \n",a);
    return 0;
}
int change(int x){
x= 20;
}