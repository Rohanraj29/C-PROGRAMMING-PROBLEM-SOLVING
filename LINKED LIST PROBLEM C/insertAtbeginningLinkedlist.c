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
struct node *temp;//create for traversal in node
head->data=8;
head->next=second;
second->data=10;
second->next=third;
third->data=12;
third->next=NULL;
printf("Enter the data item to insert in fourth node:-");
scanf("%d",&fourth->data);
fourth->next=head;
head=fourth;
temp=head;
while(temp!=NULL){
    printf("Data are:-%d\n",temp->data);
    temp=temp->next;
}
return 0;
}