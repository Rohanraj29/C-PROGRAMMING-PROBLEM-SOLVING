//WAP to read any digit and display it in the word.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("One");
        break;
         case 2:
        printf("Two");
        break;
         case 3:
        printf("Three");
        break;
         case 4:
        printf("Four");
        break;
         case 5:
        printf("Five");
        break;
         case 6:
        printf("Six");
        break;
         case 7:
        printf("Seven");
        break; 
        case 8:
        printf("Eight");
        break;
         case 9:
        printf("Nine");
        break;
        default:
        printf("It is not a digit.Digits are from 1 to 9");
        break;
    }
    return 0;
}