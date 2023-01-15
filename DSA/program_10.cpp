#include <bits/stdc++.h>

using namespace std;

class Queue{
private:
    int* arr;
    int size;
    int front;
    int rear;
public:
    Queue(){
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
    void enqueue(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }  
    int dequeue(){
        if(front==rear){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            int item=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
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
            for(int i=front;i<rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Queue Q;
    Q.enqueue(10);
    Q.display();
    Q.enqueue(20);
    Q.display();    
    Q.dequeue();
    Q.display();

    return 0;
}
