//WAP  to accept a grade and declare the equivalent description.
#include<stdio.h>
#include<string.h>
int main()
{
    char grade;
    printf("Enter the grade:-");
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        printf("Your grade is average");
        break;
         case 'E':
        printf("Your grade is excellent");
        break;
         case 'V':
        printf("Your grade is very good");
        break;
         case  'G':
        printf("Your grade is good");
        break;
         case  'F':
        printf("Your grade is fail");
        break;
        default:
        printf("Wrong choice Try again");
        break;
    }
    return 0;
}