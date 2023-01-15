#include <bits/stdc++.h>

using namespace std;

struct node{  
    int data;  
    struct node *next;  
};  
struct node *head = NULL;  
struct node *tail = NULL;  
  
void add(int data){  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;    
    if(head == NULL){  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }
    else{  
        tail->next = newNode;   
        tail = newNode;
        tail->next = head;  
    }  
}   
void search(int element) {  
    struct node *current = head;  
    int i = 1;  
    bool flag = false;
    if(head == NULL) {  
        cout<<"List is empty"<<endl;;  
    }  
    else {  
        do{
            if(current->data ==  element) {  
                flag = true;  
                break;  
            }  
            current = current->next;  
            i++;  
        }while(current != head);  
        if(flag)  
            cout<<"Element "<<element<<" is present in the list at the position :"<<i<<endl;  
        else  
            cout<<"Element "<<element<<" is not present in the list"<<endl;  
    }  
}  
      
int main(){
    add(1);  
    add(2);  
    add(3);  
    add(4);   
    search(2);  
    search(7);  
    return 0;  
}  
