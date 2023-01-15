#include <bits/stdc++.h>

using namespace std;

void rotateArray(int *arr,int size){
    int last=arr[size-1];
    for(int i=0;i<size;i++){
        arr[size-i]=arr[size-1-i];
    }
    arr[0]=last;
}


int main(){
    int size,n,index,data;
    bool found=false; 
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value you want to search in the array:";
    cin>>data;
    int start=0,end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==data){
            found=true;
            index=mid;
            break;
        }
        else if(arr[mid]>data){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"Enter the times you want to rotate an array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        rotateArray(arr,size);
    }
    index=(index+n)%size;
    if(found==true){
        cout<<data<<" found at "<<index<<endl;
    }
    else{
        cout<<"Element not found."<<endl;   
    }
    return 0;
}
