#include<stdio.h>
int main()
{
int m,u,c,s,b;
while(m!=2929){
printf ("ENTER YOUR METER NUMBER:");
scanf ("%d",&m);
if(m!=2929)
printf ("INVALID METER NUMBER\n");
}
printf ("WELCOME TO NORTH BIHAR POWER DISTRIBUTION COMPANY LIMITED PAYMENT APP\n");
printf ("1.RESIDENTIAL \n");
printf ("2.AGRICULTURE\n");
printf ("3.COMMERCIAL\n");
printf ("4.BUSINESS\n");
printf ("PLEASE SELECT YOUR METER TYPE:");
scanf ("%d",&c);
switch (c){
s=20;
case 1:
printf("An electricity board charges the following rates to residential users to discourage large consumption of energy:\n\n");
printf("0 Unit to 49 Units ..................................=Rs.1.35/Unit\n\n");
printf("50 Unit to 149 Units .............................. =Rs.2.15/Unit\n\n");
printf("150 Unit to 299 Units .............................. =Rs.3/Unit\n\n");
printf("300 Unit to 499 Units .............................. =Rs.3.5/Unit\n\n");
printf("500 Unit to 1000 Units .............................. =Rs.6./Unit\n\n");
printf ("ENTER NUMBER OF UNIT CONSUMED:");
scanf ("%d",&u);
if(u>0&&u<50)
{
b=(1.35*u)+20;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=50&&u<150)
{
b=(2.15*u)+20;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=150&&u<300)
{
b=(3*u)+20;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=300&&u<500)
{
b=(3.5*u)+20;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=500&&u<1000)
{
b=(6*u)+20;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
break;
 case 2:
printf("An electricity board charges the following rates to agriculture users to discourage large consumption of energy:\n\n");
printf("0 Unit to 49 Units ..................................=Rs.0.25/Unit\n\n");
printf("50 Unit to 149 Units .............................. =Rs.0.55/Unit\n\n");
printf("150 Unit to 299 Units .............................. =Rs.0.80/Unit\n\n");
printf("300 Unit to 499 Units .............................. =Rs.1/Unit\n\n");
printf("500 Unit to 1000 Units .............................. =Rs.2.5./Unit\n\n");
printf ("ENTER NUMBER OF UNIT CONSUMED:");
scanf("%d",&u);
if(u>0&&u<50)
{
b=(0.25*u)+25;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=50&&u<150)
{
b=(0.55*u)+25;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=150&&u<300)
{
b=(0.80*u)+25;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=300&&u<500)
{
b=(1*u)+25;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=500&&u<1000)
{
b=(2.5*u)+25;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
break;
case 3:
printf("An electricity board charges the following rates to commercial users to discourage large consumption of energy:\n\n");
printf("0 Unit to 49 Units ..................................=Rs.3/Unit\n\n");
printf("50 Unit to 149 Units .............................. =Rs.4.5/Unit\n\n");
printf("150 Unit to 299 Units .............................. =Rs.5.5/Unit\n\n");
printf("300 Unit to 499 Units .............................. =Rs.6.8/Unit\n\n");
printf("500 Unit to 1000 Units .............................. =Rs.9./Unit\n\n");
printf ("ENTER NUMBER OF UNIT CONSUMED:");
scanf("%d",&u);
if(u>0&&u<50)
{
b=(3*u)+65;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=50&&u<150)
{
b=(4.5*u)+65;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=150&&u<300)
{
b=(5.5*u)+65;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=300&&u<500)
{
b=(6.8*u)+65;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
else
if(u>=500&&u<1000)
{
b=(9*u)+65;
printf ("YOUR TOTAL BILL IS RS %d",b);
}
break;
case 4:
printf("An electricity board charges the following rates to business users to discourage large consumption of energy:\n\n");
printf("0 Unit to 49 Units ..................................=Rs.4/Unit\n\n");
printf("50 Unit to 149 Units .............................. =Rs.6/Unit\n\n");
printf("150 Unit to 299 Units .............................. =Rs.8/Unit\n\n");
printf("300 Unit to 499 Units .............................. =Rs.10/Unit\n\n");
printf("500 Unit to 1000 Units .............................. =Rs.12/Unit\n\n");
printf ("ENTER NUMBER OF UNIT CONSUMED:");
scanf("%d",&u);
if(u>0&&u<50)
{
b=(4*u)+80;
printf ("YOUR TOTAL BILL IS RS %d",b);
return 0;
}
else
if(u>=50&&u<150)
{
b=(6*u)+80;
printf ("YOUR TOTAL BILL IS RS %d",b);
return 0;
}
else
if(u>=150&&u<300)
{
b=(8*u)+80;
printf ("YOUR TOTAL BILL IS RS %d",b);
return 0;
}
else
if(u>=300&&u<500)
{
b=(10*u)+80;
printf ("YOUR TOTAL BILL IS RS %d",b);
return 0;
}
else
if(u>=500&&u<1000)
{
b=(12*u)+80;
printf ("YOUR TOTAL BILL IS RS %d",b);
return 0;
}
break;
}






























    return 0;
}