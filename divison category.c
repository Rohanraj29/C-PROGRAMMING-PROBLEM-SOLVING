#include<stdio.h>

int main()
{
int rollno,p,c,ca,per;
char name[20];
printf ("Enter the roll number:");
scanf ("%d", & rollno);
printf ("Enter Name of the student:");
scanf ("%s", & name);
printf ("Marks in physics:");
scanf ("%d", & p);
printf ("Marks in chemistry:");
scanf ("%d", & c);
printf ("Marks in computer applications:");
scanf ("%d", & ca);
printf ("Total marks is %d:", p+c+ca);
printf ("Percentage is %d:", (p+c+ca)/3);
if(per<60 && per==60)
printf ("First divison:");
else
if(per>60 && per<45)
printf ("Second division");
else
printf ("Third divison");


    return 0;
}