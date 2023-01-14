#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        // this will store the address of the next node
        struct node *next;
        
};

struct node insertat(struct node*ptr){
    struct node *temp,*newnode;
    temp=ptr;
    // creation of new node for insertion at begining
      newnode=((struct node*)malloc(sizeof(struct node)));
      newnode->data=10;
      newnode->next=0;
      newnode->next=temp;
      temp=newnode;
}



void main(){
    struct node *head,*newnode,*temp;
    head=NULL;
    int choice=1;

    while(choice){
        // dynamically creating the memory of a node
        newnode=((struct node*)malloc(sizeof(struct node)));
        // now enter the data and adress

        printf("enter the data in the node\n");
        scanf("%d", &newnode->data);
        
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            newnode->next=NULL;
            temp->next=newnode;
            temp=newnode;
        }
        printf("do u want to create another node enter(0 or1) ");
        scanf("%d", &choice);
    }
    insertat(head);
    temp=head;
    while(temp!=0){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    
}