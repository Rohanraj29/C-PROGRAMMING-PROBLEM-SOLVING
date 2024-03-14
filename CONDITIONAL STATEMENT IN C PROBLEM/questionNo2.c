//WAP TO check whether a given number is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    if(a%2==0){
        printf("It is an even number");
    }
    else{
        printf("It is a odd number");
    }
    return 0;
}