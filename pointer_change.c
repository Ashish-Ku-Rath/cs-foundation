// Write a function that changes a variable using pointer
#include<stdio.h>
void change(int *a);
int main(){
    int a =10 ;
    
printf("The value before is :%d \n",a);
    change(&a) ;
    printf("The value after changing is :%d \n",a);

return 0 ;
}
void change(int *a) {
   *a = 15 ;
}
