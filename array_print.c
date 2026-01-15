// write a function that print all the elements of an array.
#include<stdio.h.>
void print_array(int arr[],int size);
int main(){
    int arr[20];
    int size ;
    printf("Enter size of the element :");
    scanf("%d",&size);
    if (size <=0 || size >20 ){
        printf(" invalid size : Enter size between 1 and 20\n");
        return 0;
    }
    printf("Enter the element :");
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    print_array( arr,size);

    return 0;
}
  void print_array(int arr[],int size){
    for(int i=0;i< size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
  }