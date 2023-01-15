#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->next=NULL;
    return n;
}
void displayLinkedList(struct Node* head){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=head;
    while((ptr)!=NULL){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
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
    struct Node* head=createNode(7);
    struct Node* second=createNode(11);
    struct Node* third=createNode(1);
    struct Node* fourth=createNode(20);
   
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    // Displaying Linked List
    displayLinkedList(head);

    int value=search(head,10);
    if(value==-1){
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element "<<value<<" Found."<<endl;
    }

    return 0;
}
