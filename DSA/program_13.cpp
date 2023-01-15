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
struct Node*insertAtFirst(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node*insertAtLast(struct Node* head,int data){
    struct Node* ptr1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr2=(struct Node*)malloc(sizeof(struct Node));
    ptr2=head;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
    }
     ptr2->next=ptr1;
    ptr1->next=NULL;
    ptr1->data=data;
    return head;
}
struct Node* insertIndex(struct Node* head,int data,int pos){
    struct Node*ptr1=(struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr2=(struct Node*)malloc(sizeof(struct Node));
    ptr2=head;
    for(int i=1;i<pos-1;i++){
        ptr2=ptr2->next;
    }
    ptr1->data=data;
    ptr1->next=ptr2->next;
    ptr2->next=ptr1;
    return head;
}
struct Node* deleteAtFirst(struct Node* head){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node* deleteAtLast(struct Node* head){
    struct Node* ptr1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr2=(struct Node*)malloc(sizeof(struct Node));
    ptr1=head;
    ptr2=head->next;
    while((ptr2->next)!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;    
    }
    ptr1->next=NULL;
    free(ptr2);
    return head;
}
struct Node* deleteAtIndex(struct Node* head,int pos){
    struct Node* ptr1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr2=(struct Node*)malloc(sizeof(struct Node));
    ptr1=head;
    ptr2=head->next;
    for(int i=1;i<pos-1;i++){
        ptr2=ptr2->next;
        ptr1=ptr1->next;
    }
    ptr1->next=ptr2->next;
    free(ptr2);
    return head;
}
int main(){
    struct Node* head=createNode(7);
    struct Node* second=createNode(11);
    struct Node* third=createNode(14);
    struct Node* fourth=createNode(20);
   
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    // Before inserting
    displayLinkedList(head);

    // Inserting at first node.
    head=insertAtFirst(head,5);
    cout<<"Linked List after inserting 5 at first:"<<endl;
    displayLinkedList(head);

    // Inserting at last node.
    head=insertAtLast(head,23);
    cout<<"Linked List after inserting 23 at last:"<<endl;
    displayLinkedList(head);

    // Inserting at any index
    head=insertIndex(head,0,3);
    cout<<"Linked List after inserting 0 at 3rd position:"<<endl;
    displayLinkedList(head);

    // Deletion at first
    head=deleteAtFirst(head);
    cout<<"Linked List after deleting from first index"<<endl;
    displayLinkedList(head);

    // Deletion at last
    head=deleteAtLast(head);
    cout<<"Linked List after deleting from last index"<<endl;
    displayLinkedList(head);

    // Deletion at last
    head=deleteAtIndex(head,3);
    cout<<"Linked List after deleting from 3rd index"<<endl;
    displayLinkedList(head);

    return 0;
}