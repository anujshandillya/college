#include <bits/stdc++.h>

using namespace std;

class Stack{
    int* arr;
    int top;
    int size;
public:
    Stack(){
        size=1001;
        arr=new int[size];
        top=-1;
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            cout<<"Stack is not Empty"<<endl;
        }
    }
    void push(int data){
        if(top==size){
            cout<<"Full Stack Exception"<<endl;
        }
        else{
            top++;
            arr[top]=data;   
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Empty Stack Exception"<<endl;
        }
        else{
            int item=arr[top];
            top--;
        }
    }
    void Stack_top(){
        if(top==-1){
             cout<<"Empty Stack Exception"<<endl;
        }
        else{
            cout<<arr[top]<<endl;
        }
    }
};

int main(){
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.Stack_top();
    S.pop();
    S.Stack_top();
    S.isEmpty();
       
    return 0;
}
