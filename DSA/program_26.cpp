#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int start, int mid, int end){
    int temp_arr[end - start + 1];

    int i = start;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp_arr[k] = arr[i];
            i++;
            k++;
        }else{
            temp_arr[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid){
        temp_arr[k] = arr[i];
        i++;
        k++;
    }

    while(j <= end){
        temp_arr[k] = arr[j];
        j++;
        k++;
    }

    for(i = start; i <= end; i++){
        arr[i] = temp_arr[i - start];
    }
    
}

void merge_sorting(int *arr, int start, int end){
    if(start < end){
        int mid = (start + end)/2;

        merge_sorting(arr, start, mid);
        merge_sorting(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int arr[8] = {8,7,6,5,4,3,2,1};

    merge_sorting(arr, 0, 7);

    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}