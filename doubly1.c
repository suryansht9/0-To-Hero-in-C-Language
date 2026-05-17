#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * prev;
    struct node * next;
};
struct node * head=NULL;

int main() {
     struct node * first=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node *)malloc(sizeof(struct node));
     first->data=90;
     first->prev=NULL;
     first->next=second;
     second->data=900;
     second->prev=first;
     second->next=third;
     third->data=9000;
     third->prev=second;
     third->next=NULL;
     head=first;
     struct node * temp=head;
     while(temp != NULL){
        printf("elements of doubly linked list is %d\n",temp->data);
        temp=temp->next;
     }
    return 0;
}