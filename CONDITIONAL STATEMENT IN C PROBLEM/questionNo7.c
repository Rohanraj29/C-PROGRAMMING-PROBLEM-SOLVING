//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main()
{
    int height;
    printf("Enter the height of person in centimeters:-");
    scanf("%d",&height);
    if(height>165){
        printf("You are tall");
    }
    else 
    if(height>=150&&height<=165){
        printf("You are of average height");
    }
    else{
        printf("You are dwarf");
    }
    return 0;
}