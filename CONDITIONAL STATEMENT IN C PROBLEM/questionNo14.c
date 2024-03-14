//WAP  to check whether a triangle can be formed with the given values for the angles.
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
    if(a+b+c==180){
        printf("The triangle can be formed");
    }
    else{
        printf("The triangle cann't be formed");
    }
    return 0;
}