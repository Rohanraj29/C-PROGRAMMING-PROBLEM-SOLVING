#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
struct node *head=malloc(sizeof(struct node));
struct node *second=malloc(sizeof(struct node));
struct node *third=malloc(sizeof(struct node));
struct node *fourth=malloc(sizeof(struct node));
struct node *temp,*ptr;
head->data=8;
head->next=second;
second->data=10;
second->next=third;
third->data=12;
third->next=NULL;
temp=second;
temp->next=fourth;
printf("Enter the data item to insert in fourth node:-");
scanf("%d",&fourth->data);
fourth->next=third;
ptr=head;
while(ptr!=NULL){
    printf("Data are:-%d\n",ptr->data);
    ptr=ptr->next;
}
return 0;
}
