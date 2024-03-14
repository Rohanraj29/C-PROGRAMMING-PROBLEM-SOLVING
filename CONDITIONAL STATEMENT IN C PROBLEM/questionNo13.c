//WAP to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the side a:-");
    scanf("%d",&a);
    printf("Enter the side b:-");
    scanf("%d",&b);
    printf("Enter the side c:-");
    scanf("%d",&c);
    if(a==b && a==c){
        printf("It is an equilateral triangle");
    }
    else 
    if(b==a || b==c){
        printf("It is an isoceles triangle");
    }
    else{
        printf("It is a scalene triangle");
    }
    return 0;
}