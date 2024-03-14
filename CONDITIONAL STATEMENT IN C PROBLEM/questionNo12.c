//WAP to read temperature in centigrade and display a suitable message according to the temperature state below.
#include<stdio.h>
int main()
{
    int temperature;
    printf("Enter the temperature:-");
    scanf("%d",&temperature);
    if(temperature<0){
        printf("Freezing weather");
    }
    else 
    if(temperature>=0 && temperature<10){
        printf("Very Cold Weather");
    }
     else 
    if(temperature>=10 && temperature<20){
        printf("Cold Weather");
    }
     else 
    if(temperature>=20 && temperature<30){
        printf("Normal Weather");
    }
     else 
    if(temperature>=30 && temperature<40){
        printf("Hot Weather");
    }
    else{
        printf("Its very hot weather");
    }
    return 0;
}