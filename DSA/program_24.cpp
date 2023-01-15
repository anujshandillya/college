#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int *arr, int arrsize){
    for(int i = 0; i < arrsize-1; i++){
        int flag = 0;

        for(int j = 0; j < arrsize-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);

                flag = 1;
            }
        }

        if(flag == 0){
            break;
        }
    }
}

int main(){
    int A[] = {5,4,3,2,1};

    bubble_sort(A,5);

    for(int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }

    cout << endl;
}