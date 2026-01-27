// Working Day 9 : String using pointer
#include<stdio.h>
int main (){
    char str[50];
    char *ptr ;
    ptr = str ;
    printf("enter your string:\n");
    fgets(str,50,stdin);
    for(int i=0; *(ptr+i)!='\0';i++){
        printf("%c",*(ptr+i));
    }
    return 0;
}