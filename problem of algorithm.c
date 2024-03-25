#include<stdio.h>

int main()
{
int a,b,c,d;
printf ("Enter value of a:");
scanf("%d",&a);
printf ("Enter value of b:");
scanf ("%d",&b);
c=(a+b)*3;
d=a+b;
if(a==b)
printf ("Same %d",c);
else
printf ("Sum %d",d);
    return 0;
}