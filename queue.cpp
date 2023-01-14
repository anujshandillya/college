#include <bits/stdc++.h>

#define N 100

using namespace std;

class Queue {
private:
    int element, i;
    int arr[N];
    int last;
    int front;

public:

    Queue() {
        last = 0;
        front = 0;
    }

    void enqueue() {
        if (last == N)
            cout << "queue is full\n";
        else {
            cout << "Enter The Value: ";
            cin>>element;
            arr[last++] = element;
        }
    }

    void dequeue() {
        if (front == last)
            cout << "\nqueue is Empty\n\n";
        else {
            front++;
        }
    }

    void print() {
        cout << "Queue Size : " << (last - front);
        for (i = front; i < last; i++){
            cout << "\nPosition : " << i << " , Value  : " << arr[i] << "\n";
        }
    }
};

int main() {
    int choice, flag = 1;
    Queue q;
    do {
        cout << "1. Add\n2. Remove\n3. Print\n\nOthers to exit\n";
        cin>>choice;
        switch (choice) {
            case 1:
                q.enqueue();
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.print();
                break;
            default:
                flag = 0;
                break;
        }
    } while (flag);

    return 0;
}