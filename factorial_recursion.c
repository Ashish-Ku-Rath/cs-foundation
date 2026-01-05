# include<stdio.h>
int fact(int n);

int main() {
 int n ;
 printf("enter the number :");
 scanf("%d",&n);

printf(" the factorial of the number is :%d \n",fact(n));

}
 int fact(int n){
    if( n==0 || n==1){
        return 1;
    }
        else {
            return n* fact(n-1);
        }
    }
 