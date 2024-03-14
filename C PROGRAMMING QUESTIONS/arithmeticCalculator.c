#include<stdio.h>
int main(){
    int a,b,choice,sum,multiply,subtraction,division;
      printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Divison\n");
    printf("Select Your choice from the given option:-");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        sum=a+b;
        printf("Sum of two number is %d",sum);
        break;
        case 2:
        subtraction=a-b;
        printf("Subtraction of two number is %d",subtraction);
        break;
        case 3:
        multiply=a*b;
        printf("Multiplication of two number is %d",multiply);
        break;
        case 4:
        division=a/b;
        printf("Division of two number is %d",division);
        break;
        default:
        printf("Not a valid choice");
    }
    return 0;
}