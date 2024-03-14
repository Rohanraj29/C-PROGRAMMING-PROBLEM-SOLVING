//WAP  to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:-");
    scanf("%d",&age);
    if(age>18){
        printf("He is eligible for voting");
    }
    else{
        printf("He is not eligible for voting");
    }
    return 0;
}