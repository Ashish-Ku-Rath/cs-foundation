// find factorial of the given number using for loop 
# include <stdio.h>
int main(){
    int n ,i ,f=1;

   printf ("enter the Number n:");
    scanf("%d",&n);
    if( n<0) {
    printf("invalid input (enter positive number):");
    return 0;
    }
    if(n==0|| n==1)
    return 1;
    for(i=1;i<=n;i++)
     f=f*i ;
     printf("the factorial of the given number is %d \n", f);
     
     return 0;
}