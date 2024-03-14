//WAP to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month days:-");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("January have 31 days");
        break;
           case 2:
        printf("February have 28 days/ 29 days");
        break;
           case 3:
        printf("March have 31 days");
        break;
           case 4:
        printf("April have 30 days");
        break;
           case 5:
        printf("May have 31 days");
        break;
           case 6:
        printf("June have 30 days");
        break;
           case 7:
        printf("July have 31 days");
        break;
        case 8:
        printf("August have 31 days");
        break;
        case 9:
        printf("September have 30 days");
        break;
        case 10:
        printf("October have 31 days");
        break;
        case 11:
        printf("November have 30 days");
        case 12:
        printf("December have 31 days");
        default:
        printf("No any month days");
    }
    return 0;
}