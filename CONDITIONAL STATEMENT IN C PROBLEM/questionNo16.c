//WAP to calculate profit and loss on a selling.
#include<stdio.h>
int main()
{
    int cp;
    int sp;
    int profit;
    int loss;
    printf("Enter the cost price:-");
    scanf("%d",&cp);
    printf("Enter the selling price:-");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(cp<sp){
    printf("You have earned profit of %d",profit);
    }
    if(cp>sp){
    printf("You have earned profit of %d",profit);
    }
    return 0;
}