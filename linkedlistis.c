#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
void linked(struct node *ptr){
while(ptr!=NULL)
{
printf ("Element %d\n",ptr->data);
printf ("%d",ptr->next);
ptr=ptr->next;
}
}

int main(){
struct node *head = malloc(sizeof(struct node));
struct node *second = malloc(sizeof(struct node));
struct node *third = malloc(sizeof(struct node));
head->data=4;
head->next=third;
second->data=8;
second->next=head;
head=second;
//free(second);
third->data=10;
third->next=NULL;
//head=third;
//printf ("%d\n",head->data);
//printf ("%d\n",head->next);
//printf ("%d\n",second->data);
//printf ("%d\n",second->next);
//printf ("%d\n",third->data);
//printf ("%d\n",third->next);
linked(head);
return 0;
    }