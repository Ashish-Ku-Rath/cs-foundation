//Declare on array of 5 integers 
#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("Enter %d integer ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The 5 integers are :\n");
    for (int i=0;i<5;i++){
      printf("%d \n",arr[i]);
}
return 0;
}