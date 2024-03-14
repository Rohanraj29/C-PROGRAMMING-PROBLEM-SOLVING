#include<stdio.h>
int main(){
int a[4];
int add;
for(int i=0;i<4;i++)
{
    printf("Element %d:-",i);
    scanf("%d",&a[i]);
}
for(int i=0;i<=4;i++)
{
    printf("Element are %d",a[i]);
}
add=a[0]+a[1]+a[2]+a[3];
printf("Sum is %d",add);
return 0;
}