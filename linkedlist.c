#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node *head=NULL;

void insert(){
    struct Node* temp;
    temp=(struct Node*) malloc(sizeof(struct Node));
    printf("Enter node data");
    scanf("%d",temp->data);
    if(head==NULL){
        head=temp;
    }
    else{
        struct Node* ptr;
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display(){
    struct Node* start = head;
    while(start!=NULL){
        printf("%d->",start->data);
        start=start->next;
    }
    printf("NULL");
}
int main(){
  insert();
  insert();
  insert();
  display();
}
