// By using pointer to show variable , adress of variable ,pointer storing adress
#include<stdio.h>
int main(){
    int a =8;
    int *ptr ;
    ptr= &a ;
    printf("The value of a is  :%d\n",a);
    printf("The adress of a is  :%d\n",&a);
    printf("The value of pointer  is  :%u\n",*ptr);
    printf("The adress of pointer is  :%u\n",&ptr);
 return 0;
}