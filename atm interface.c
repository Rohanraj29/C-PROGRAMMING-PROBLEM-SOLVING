#include<stdio.h>
int amount=4000;pin,choice,withdraw,balance,deposit,total;
int main()
{
char c,yes;
while (pin!=2929){
printf ("ENTER YOUR 4 DIGIT ATM PIN:");
scanf ("%d",&pin);
if(pin!=2929)
printf ("INVALID PIN\n");
}
 printf("********Welcome to ATM Service**************\n");
 printf ("1.CHECK BALANCE\n");
 printf ("2.WITHDRAW CASH\n");
 printf ("3.DEPOSIT CASH\n");
 printf ("4.QUIT\n");
 printf("******************?**************************?\n\n");
 printf ("PLEASE SELECT YOUR CHOICE\n");
 scanf ("%d",&choice);
 switch (choice){
  case 1:
 printf ("YOUR CURRENT BALANCE IS RS %d",amount);
  break;
 case 2:
 printf ("ENTER THE AMOUNT YOU WISH TO WITHDRAW:");
 scanf ("%d",&withdraw);
 if(withdraw%100!=0)
 {
 printf("PLEASE ENTER AMOUNT IN MULTIPLES OF 100");
 }  
 else
 if(withdraw>(amount-500))
 {
 printf ("INSUFFICENT BALANCE ");
 }
 else
 {
 balance=amount-withdraw;
 printf ("PLEASE COLLECT YOUR CASH\n");
 printf ("YOUR TOTAL BALANCE IS RS %d",balance);
 }
  break;
 case 3:
 printf("ENTER AMOUNT TO DEPOSIT:");
 scanf ("%d",&deposit);
 total =amount+deposit;
 printf ("YOU HAVE SUCCESSFULLY DEPOSIT AMOUNT IN YOUR ACCOUNT\n");
 printf ("YOUR TOTAL BALANCE IS RS %d",total);
 break;
 case 4:
 printf ("THANK YOU FOR USING ATM\n");
 printf ("DO YOU WISH ANOTHER TRANSCATION\n");
 printf ("Want transaction yes or no:");
 scanf ("%s",&c); 
 if(c!=yes)
 {
 printf ("********Welcome to ATM Service**************\n");
 printf("1. Check Balance\n");
 printf("2. Withdraw Cash\n");
 printf("3. Deposit Cash\n");
 printf("4. Quit\n");
 printf("******************?**************************?*\n\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 break;
 }
 else
 {
 printf ("Thank you");
 }
 }
 
 
  return 0;
}