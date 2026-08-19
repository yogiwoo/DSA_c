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
    scanf("%d",&temp->data);
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
void addToHead(){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to put to head");
    scanf("%d",&ptr->data);
    temp->next=head;
    head=temp;
}
void addToPos(){
    int pos;
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    
    printf("enter data to a specific position");
    scanf("%d",&pos);
    printf("enter data to add");
    scanf("%d",&temp->data);
    struct Node* x; //to store data at temp;
    struct Node* ptr=head; //iterator
    int counter=0;
    while(counter<pos-1){
        ptr=ptr->next;
        counter++;
    }
    x=ptr->next;
    temp->next=x;
    ptr->next=temp;
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
