//WAP  to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
#include<stdio.h>
int main()
{
    int roll_no;
    char name;
    int maths,computer,gk;
    int total;
    float percentage;
    printf("Enter the marks of maths:-");
    scanf("%d",&maths);
    printf("Enter the marks of computer:-");
    scanf("%d",&computer);
    printf("Enter the marks of gk:-");
    scanf("%d",&gk);
    total=maths+computer+gk;
    percentage=total/3;
    printf("Total marks in three subject is %d\n",total);
    printf("Your total percentage is %f\n",percentage);
    if(percentage>60 && percentage<=100){
        printf("First division");
    }
    else
    if(percentage<60 && percentage>=48){
        printf("Second division");
    }
       else
    if(percentage<48 && percentage>=33){
        printf("Third division");
    }
    else{
        printf("You are fail in the examination");
    }
    return 0;
}