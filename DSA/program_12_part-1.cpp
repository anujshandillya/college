#include <bits/stdc++.h>

using namespace std;

class Unordered_Priority_Queue{
    int* arr;
    int size;
    int front;
    int rear;
public:
    Unordered_Priority_Queue(){
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
            arr[rear]=data;
            rear++;
        }
    }
    int findMin(){
        int min=front;
        for(int i=front;i<rear;i++){
            if(arr[i]<arr[min]){
                min=i;
            }
        }
        return min;
    }
    void deleteMin(){
        int min=findMin();
        int item=arr[min];
        arr[min]=arr[rear-1];
        rear--;
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
    Unordered_Priority_Queue Q;
    Q.enqueue(8);
    Q.enqueue(3);
    Q.enqueue(9);
    Q.enqueue(0);
    Q.display();
    Q.deleteMin();
    Q.display();
    Q.deleteMin();
    Q.display();

    return 0;
}
