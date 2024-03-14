//WAP to check whether a given number is positive or negative.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    if(a>0){
        printf("It is a positive number");
    }
    else{
        printf("It is a negative number");
    }
    return 0;
}