//WAP  to read any day number in integer and display the day name in word format.
#include<stdio.h>
int main()
{
    int days;
    printf("Enter the week days:-");
    scanf("%d",&days);
    switch(days){
        case 1:
        printf("At that day it is monday");
        break;
           case 2:
        printf("At that day it is tuesday");
        break;
           case 3:
        printf("At that day it is wednesday");
        break;
           case 4:
        printf("At that day it is thrusday");
        break;
           case 5:
        printf("At that day it is friday");
        break;
           case 6:
        printf("At that day it is saturday");
        break;
           case 7:
        printf("At that day it is sunday");
        break;
        default:
        printf("No any week days");
    }
    return 0;
}