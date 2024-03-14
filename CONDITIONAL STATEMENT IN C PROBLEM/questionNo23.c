//WAP which is a Menu-Driven Program to perform a simple calculation.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int choice;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter the choice:-");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    c=a+b;
    printf("Addition of two number is %d",c);
    break;
     case 2:
    c=a-b;
    printf("Subtraction of two number is %d",c);
    break;
     case 3:
    c=a*b;
    printf("Multiplication of two number is %d",c);
    break;
     case 4:
    c=a/b;
    printf("Division of two number is %d",c);
    break;
    default:
    printf("Invalid choice");
    }
    return 0;
}