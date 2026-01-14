#include<stdio.h>
int main (){
    int length=0;
    char name[30];
    printf("enter your name:");
    fgets(name,30,stdin);
    printf("hello %s \n",name);
    for(int i=0; name[i]!='\0';i++){
        if(name[i]!='\n')
      length++ ;
    }
      printf("The length of the string is : %d \n", length);

    return 0;
}