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
struct Node* insertAtFirst(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->prev=NULL;
    ptr->data=data;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    return head;    
}
struct Node* insertAtLast(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr1=head;
    while(ptr1->next!=NULL){
        ptr1=ptr1->next;
    }
    ptr1->next=ptr;
    ptr->prev=ptr1;
    ptr->data=data;
    ptr->next=NULL;
    return head;    
}
struct Node* insertAtIndex(struct Node* head,int data,int pos){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr1=head->next;
    struct Node* ptr2=head;
    for(int i=1;i<pos-1;i++){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr2->next=ptr;
    ptr->prev=ptr2;
    ptr->data=data;
    ptr->next=ptr1;
    ptr1->prev=ptr;
    return head;    
}
struct Node* deleteAtFirst(struct Node* head){
    struct Node* ptr=head;
    head=ptr->next;
    head->prev=NULL;
    free(ptr);
    return head;
}
struct Node* deleteAtLast(struct Node* head){
    struct Node* ptr1=head;
    struct Node* ptr2=head->next;
    while((ptr2->next)!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=NULL;
    free(ptr2);
    return head;
}
struct Node* deleteAtIndex(struct Node* head,int pos){
    struct Node* ptr1=head;
    struct Node* ptr2=head->next;
    for(int i=1;i<pos-1;i++){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=ptr2->next;
    struct Node* ptr3=ptr2;
    ptr2=ptr2->next;
    ptr2->prev=ptr1;
    free(ptr3);
    return head;
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

    // Insertion at first
    head=insertAtFirst(head,0);
    cout<<"Linked List after inserting 0 at first"<<endl;
    display_Linked_List_Forward(head);

    // Insertion at last
    head=insertAtLast(head,50);
    cout<<"Linked List after inserting 50 at last"<<endl;
    display_Linked_List_Forward(head);

    // Insertion at any index
    head=insertAtIndex(head,25,3);
    cout<<"Linked List after inserting 25 at 3rd index"<<endl;
    display_Linked_List_Forward(head);

    // Deletion at first
    head=deleteAtFirst(head);
    cout<<"Linked List after deletion at first"<<endl;
    display_Linked_List_Forward(head);

    // Deletion at last
    head=deleteAtLast(head);
    cout<<"Linked List after deletion at last"<<endl;
    display_Linked_List_Forward(head);

    // Deletion at any index
    head=deleteAtIndex(head,3);
    cout<<"Linked List after deletion at 3rd index"<<endl;
    display_Linked_List_Forward(head);

    return 0;
}
