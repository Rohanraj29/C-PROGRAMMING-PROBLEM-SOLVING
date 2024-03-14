//WAP TO CHECK WHETHER TWO INTEGERS ARE EQUAL OR NOT.
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number:-");
    scanf("%d",&a);
     printf("Enter the second number:-");
    scanf("%d",&b);
    if(a==b){
        printf("Both numbers are equal");
    }
    else{
        printf("Both numbers are not equal");
    }
    return 0;
}