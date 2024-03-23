#include<stdio.h>
#include<string.h>

 main()
{
char name[20];
char pass[20];
printf ("Enter username:");
scanf("%s", name);
printf ("Enter password:");
scanf("%s",  pass);
if(strcmp(name,"MMU")==0&&strcmp(pass,"Mullana")==0)
printf ("Welcome \n");
else
printf ("Acess denied\n");
    return 0;
    
}