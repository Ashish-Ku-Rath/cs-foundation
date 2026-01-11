/* write a programe to handle a structure to print student
 details like name , roll no, averege marks of 5 students in an array of structure 
 */
#include<stdio.h>
struct student {
    int roll_no;
    float avg_marks ;
    char name[30] ;

};
   int main() {
    struct student s[5] ;
    for (int i=0; i< 5 ; i++){
        printf ("enter student details : %d\n", i+1);
        printf(" Enter student Name :\n");
        scanf("%s",s[i].name);
         printf(" Enter student Roll no:\n");
        scanf("%d",&s[i].roll_no);
         printf(" Enter student Average marks :\n");
        scanf("%f",&s[i].avg_marks);
    }
    for( int i=0;i<5; i++){
         printf ("Student details : %d\n", i+1);
    printf("Student Name %s \n",s[i].name);
    printf("Student Roll no %d \n",s[i].roll_no);
    printf("Student Average marks %f \n",s[i].avg_marks);
    }
return 0;
   }