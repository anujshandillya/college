#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int data){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->next=NULL;
    n->prev=NULL;
    return n;
}
void display_Linked_List_Forward(struct Node* head){
    struct Node* ptr=(struct  Node*)malloc(sizeof(struct Node));
    ptr=head;
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void display_Linked_List_Reverse(struct Node* head){
    struct Node* ptr=(struct  Node*)malloc(sizeof(struct Node));
    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->prev;
    }
}
int search(struct Node* head,int value){
    struct Node* ptr=head;
    if(head!=NULL){
        while(ptr!=NULL){
            if(ptr->data==value){
                return ptr->data;
            }
            ptr=ptr->next;
        }
    }
    return -1;
}

int main(){
    struct Node* head=createNode(10);
    struct Node* first=createNode(20);
    struct Node* second=createNode(30);
    struct Node* third=createNode(40);
    
    head->prev=NULL;
    head->next=first;

    first->prev=head;
    first->next=second;

    second->prev=first;
    second->next=third;

    third->prev=second;
    third->next=NULL;
    
    // Displaying 
    cout<<"Displaying Linked List in Forward:"<<endl;
    display_Linked_List_Forward(head);
    cout<<"Displaying Linked List in Reverse:"<<endl;
    display_Linked_List_Reverse(head);
    
    int value=search(head,30);
    if(value==-1){
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element "<<value<<" Found."<<endl;
    }

    return 0;
}
