#include <bits/stdc++.h>

#define N 9

using namespace std;

int binary_search(int* A,int key){
    int start=0,end=N-1;

    while(start!=end){
        int mid=(start+end)/2;

        if(A[mid]==key)return mid;
        else if(A[mid]>key){
            end=mid-1;
        }else if(A[mid]<key){
            start=mid+1;
        }
    }

    return -1;
}

int countOccurrences(int *A, int key)
{
    int ind = binary_search(A, key);
 
    if (ind == -1)
        return 0;
 
    int count = 1;
    int left = ind - 1;
    while (left >= 0 && A[left] == key)
        count++, left--;
 
    int right = ind + 1;
    while (right < N && A[right] == key)
        count++, right++;
 
    return count;
}

int main(){
    int A[N] = {1,2,3,3,3,3,7,8,9};
    int key;
    cout << "Enter the value to search for: ";
    cin >> key;
    int flag = countOccurrences(A,key);
    
    cout << "Number of occurences " << flag << endl;
}