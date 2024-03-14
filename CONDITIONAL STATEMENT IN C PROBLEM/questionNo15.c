//WAP to check whether an alphabet is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet:-");
    scanf("%c",&alphabet);
    if(alphabet=='a'|| alphabet=='e'|| alphabet=='i' || alphabet=='o' || alphabet=='u'||alphabet=='A'|| alphabet=='E'|| alphabet=='I' || alphabet=='O' || alphabet=='U'){
printf("An alphabet is a vowel");
    }
    else{
        printf("An alphabet is not a vowel");
    }
    return 0;
}