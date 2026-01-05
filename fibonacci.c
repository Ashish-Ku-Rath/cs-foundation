#include<stdio.h>
int main () {
    int n , a=0, b=1,c;
    printf(" Enter the term of fiobonacci series :");
    scanf("%d", &n);
    if (n <0){
        printf( "invalid input" );
        
    }
    if (n ==0){
        printf(" \n0");
        return 0;
    }
      if(n ==1){
         printf(" \n1");
        return 1;
      }
    printf(" fibonacci serties :\n");
    printf(" %d %d", a , b);
       
    
        for (int i =2; i <=n ; i++){
            c =  a + b ;
            printf(" %d", c);
            a=b ;
            b=c ;
        }

    
    return 0;

}
    
