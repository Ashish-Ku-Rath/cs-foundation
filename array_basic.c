#include<stdio.h>
int main (){
    int arr [5];
    for(int i=0;i<5 ;i++){
    printf("Enter %d integer: \n",i+1);
    scanf("%d",&arr[i]);
}
printf("\nThe 5 integer are :\n");
  for (int i=0;i<5;i++){
  printf("%d\n",arr[i]);
  }
  return 0;
}