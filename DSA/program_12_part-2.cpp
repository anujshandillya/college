#include <bits/stdc++.h>

using namespace std;

class Ordered_Priority_Queue{
    int* arr;
    int size;
    int front;
    int rear;
public:
    Ordered_Priority_Queue(){
        size=1001;
        arr=new int[size];
        front=0;
        rear=0;
    }
    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(rear==size){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int data){
        if(isFull()==true){
            cout<<"Full Queue Exception"<<endl;
        }
        else{
            int i=rear-1;
            while(i>=0 && data<arr[i]){
                arr[i+1]=arr[i];
                i--;
            }
            arr[i+1]=data;    
            rear++;        
        }
    }
    int deleteMin(){
        if(isEmpty()==true){
            cout<<"Empty Queue Exception"<<endl;
        }
        else{
            int item=arr[front];
            front++;
            return item;
        }
    }
    void display(){
        if(isEmpty()==true){
            cout<<"Empty Queue Exception"<<endl;
            return;
        }
        else{
            for(int i=front;i<rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Ordered_Priority_Queue Q;
    Q.enqueue(2);
    Q.enqueue(4);
    Q.display();
    Q.enqueue(1);
    Q.display();
    Q.deleteMin();
    Q.display();

    return 0;
}
