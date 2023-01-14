#include <bits/stdc++.h>

#define N 9

using namespace std;

int binary_search(int* A,int key){
    int start=0,end=N-1;

    while(start!=end){
        int mid=(start+end)/2;

        if(A[mid]==key) return mid;
        else if(A[mid]>key){
            end=mid-1;
        }else if(A[mid]<key){
            start=mid+1;
        }
    }

    return -1;
}

int main(){
    int A[N] = {1,2,3,4,5,6,7,8,9};
    int key;
    cout << "Enter the value to search for: ";
    cin >> key;
    int flag = binary_search(A,key);

    if(flag){
        cout << "element found at index " << flag << endl;
    }else if(flag==-1){
        return -1;
    }
}
