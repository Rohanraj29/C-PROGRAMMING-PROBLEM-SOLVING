//WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    if(a>0&&b>0){
        printf("It lies in first quadrant");
    }
    else
    if(a<0&&b>0){
        printf("It lies in second quadrant");
    }
    else
    if(a<0&&b<0){
        printf("It lies in third quadrant");
    }
    else{
        printf("It lies in fourth quadrant");
    }
    return 0;
}