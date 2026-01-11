// print fibonacci number using recursion upto nth term in series
# include <stdio.h>
int fib(int n);
int main (){
int n,i;
printf("enter the fibonacci series number:\n");
scanf("%d",&n);
if(n<0){
printf(" invalid ");
return 0; 
}
for( i=0;i<n;i++){
   printf(" %d \t",fib(i));
}

return 0;
}

int fib (int n){
 
    if(n==0){
        return 0;
    }
        if (n==1){
            return 1;
        }
        else {
            return fib(n-1)+fib(n-2);
        }
    }


