#include<stdio.h>
int main(){
int a=8;
int ptr=&a;
printf("%d",a);//prints value of a
printf("%d",&a);//prints address of a
printf("%d",ptr);//prints value stored in address of a
printf("%d",ptr);//prints address of a
return 0;
}