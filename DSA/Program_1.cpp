#include <bits/stdc++.h>

#define N 9

using namespace std;

int linear_search(int* A,int key){
    for(int i=0;i<N;i++){
        if(A[i]==key) return i;
    }

    return 0;
}

int main(){
    int A[N] = {1,4,3,24,5,26,64,11,9};
    int key;
    cout << "Enter the value to search for: ";
    cin >> key;
    int flag = linear_search(A,key);

    if(flag){
        cout << "element found at index " << flag << endl;
    }else{
        return -1;
    }
}