//WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    printf("Enter the value of c:-");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("Greatest number is:- %d",a);
    }
    else
    if(b>a&&b>c){
        printf("Greatest number is:- %d",b);
    }
    else{
        printf("Greatest number is:- %d",c);
    }
    return 0;
}