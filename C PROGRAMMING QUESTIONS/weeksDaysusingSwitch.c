#include<stdio.h>
int main(){
    int week,choice;
    printf("Enter week days");
    scanf("%d",&week);
    switch (week){
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thrusday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("Not found");
    }
    return 0;
}