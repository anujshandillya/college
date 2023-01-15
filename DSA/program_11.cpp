#include <bits/stdc++.h>

using namespace std;

class Circular_Queue{
private:
    int* arr;
    int size;
    int front;
    int rear;
public:
    Circular_Queue(){
        size=5;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool isEmpty(){
        if(front==-1){
           return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if((rear==size-1 && front==0) || (rear==front-1)){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int data){
        if(isFull()==true){
            cout<<"Full Queue Exception"<<endl;
            return;
        }
        else{
            if(front==-1 && rear==-1){
                front=0;
            }
            rear=(rear+1)%size;
            arr[rear]=data;
        }
    }
    int dequeue(){
        if(isEmpty()==true){
            cout<<"Empty Queue Exception"<<endl;
        }
        else{
            int item=arr[front];
            if(front==rear){
                front=rear=-1;
            }
            else{
                front=(front+1)%size;
            }
            return item;
        }
    }
    
    void display(){
        if(isEmpty()==true){
            cout<<"Empty Queue"<<endl;
            return;
        }
        else{
            if(rear>front){
                for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
                }
                cout<<endl;
            }   
            else{
                for(int i=rear;i<size;i++){
                cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
};

int main(){
    Circular_Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);    
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);
    Q.display();
    Q.dequeue();
    Q.display();
    Q.enqueue(60);
    Q.display();
    
    return 0;
}
