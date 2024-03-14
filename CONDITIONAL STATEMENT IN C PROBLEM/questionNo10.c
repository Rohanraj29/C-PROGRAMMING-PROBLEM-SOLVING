//WAP to determine eligibility for admission to a professional course based on the following criteria.
#include<stdio.h>
int main()
{
    int maths;
    int physics;
    int chemistry;
    int total;
    printf("Enter the marks of maths:-");
    scanf("%d",&maths);
    printf("Enter the marks of physics:-");
    scanf("%d",&physics);
    printf("Enter the marks of chemistry:-");
    scanf("%d",&chemistry);
    total=maths+physics+chemistry;
    if(total>=190&&maths+physics>=140){
        printf("Candidate are eligible for admission");
    }
    else{
        printf("Not eligible");
    }
    return 0;
    }