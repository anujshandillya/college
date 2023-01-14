#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* next;
};

class linked_list{
    private:
        node *head,*tail;
    public:
        linked_list(){
            head=NULL;
            tail=NULL;
        }

        // size of the linked list...
        int size(){
            node *temp;
            int count=0;
            if(head==NULL){
                return count;
            }else{
                count=1;
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                    count++;
                }
            }

            return count;
        }

        // for pushing at the last...
        void pushback(int n){
            node *temp = new node;
            temp->data = n;
            temp->next = NULL;

            if(head==NULL){
                head=temp;
                tail=temp;
            }else{
                tail->next=temp;
                tail=tail->next;
            }
        }

        // for deleting any node inbetween...
        void popback(int key){
            node *temp;
            if(head->data==key){
                temp=head;
                head=head->next;
            }else{
                node *current=head;
                while(current->next!=NULL){
                    if(current->next->data==key){
                        temp=current->next;
                        current->next=current->next->next;
                        free(temp);
                        break;
                    }else{
                        current=current->next;
                    }
                }
            }
        }

        // display the linked list...
        void display(){
            node *tmp;
            tmp = head;
            while (tmp != NULL){
                cout << tmp->data << endl;
                tmp = tmp->next;
            }
        }

        void pushfront(int n){
            node *newnode = new node;
            newnode->data=n;
            newnode->next=head;
            head=newnode;
        }

        // FOR PUSHING AT A SPECIFIC POSITION
        void pushinbet(int n, int position){
            node *newnode =  new node;
            newnode->data=n;

            node *temp = new node;
            temp=head;
            for(int i=2;i<position;i++){
                if(temp->next!=NULL){
                    temp=temp->next;
                }
            }

            newnode->next=temp->next;
            temp->next=newnode;
        }
};

int main(){
    linked_list a;
    a.pushback(21);
    a.pushback(34);

    cout << a.size() << endl;

    a.popback(21);

    a.display();
}