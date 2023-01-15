#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void quick_sort(int *arr, int start, int end){
    int pindex = end;
    
    for(int i = 0; i < end; i++){
        if(arr[pindex] <= arr[i]){
            swap(arr[i],arr[pindex]);
        }
    }
    if(start >= end){
        return;
    }else{
        quick_sort(arr,start,pindex-1);
        quick_sort(arr,pindex+1,end);
    }
}

int main(){
    int A[8] = {24,345,35,452,3,52,534,222};

    quick_sort(A,0,7);

    for(int l = 0; l < 8; l++){
        cout << A[l] << " ";
    }

    cout << endl;

    return 0;
}