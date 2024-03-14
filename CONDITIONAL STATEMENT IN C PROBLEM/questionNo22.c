//WAP which computes the area of various geometrical shapes using a menu-driven approach.
#include<stdio.h>
int main()
{
    const float pi=3.14;
    int length;
    int breadth;
    int height;
    int r;
    int choice;
    float area,circumference;
    printf("1. Area of circle\n");
    printf("2. Circumference of circle\n");
    printf("3. Area of rectangle\n");
    printf("4. Area of triangle\n");
    printf("Select your choice:-");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("Enter the radius:-");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of circle is %f",area);
    break;
    case 2:
    printf("Enter the radius:-");
    scanf("%d",&r);
    circumference=2*pi*r;
    printf("Circumference of circle is %f",circumference);
    break;
    case 3:
    printf("Enter the length:-");
    scanf("%d",&length);
    printf("Enter the breadth:-");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of rectangle is %f",area);
    break;
    case 4:
    printf("Enter the length:-");
    scanf("%d",&length);
    printf("Enter the breadth:-");
    scanf("%d",&breadth);
    printf("Enter the height:-");
    scanf("%d",&height);
    area=1/2*length*breadth*height;
    printf("Area of triangle is %f",area);
    break;
    default:
    printf("Invalid choice");
    break;
    }
    return 0;
}