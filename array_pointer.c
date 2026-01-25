/* Declare on array of 5 integer 
using pointer */
#include<stdio.h>
int main(){
    int arr[5] ;
    int *p;
    p= arr ;
   for (int i=0;i<5;i++){
        printf("Enter %d integer ",i+1);
        scanf("%d", p+i);
}

    printf("The 5 integers are :\n");
    for (int i=0;i<5;i++){
      printf("%d \n", *(p+i));
}
return 0;
}