#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * head=NULL;
int main() {
    struct node * first=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node *)malloc(sizeof(struct node));
      first->data=90;
      first->next=second;
      second->data=900;
      second->next=third;
        third->data=9000;
        third->next=NULL;
        head=first;
    struct node * temp=head;
    if(head==NULL){printf("list is empty\n");}
    while(temp != NULL){
        printf("linked list elements are %d\n",temp->data);
        temp=temp->next;
        }
    return 0;
}