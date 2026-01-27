// Working Day 9 : String using array
#include<stdio.h>
int main (){
    char str[50];
    printf("enter your string:\n");
    fgets(str,50,stdin);
    for(int i=0; str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    return 0;
}