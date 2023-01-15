#include <bits/stdc++.h>

using namespace std;

int findminindex(vector<int> &A,int start){
    int min_index = start;

    ++start;

    while(start < A.size()){
        if(A[start] < A[min_index]){
            min_index = start;
        }
        ++start;
    }

    return min_index;
}

void selection_sort(vector<int> &A){
    for(int i = 0; i < A.size(); i++){
        int min_index = findminindex(A,i);

        if(i != min_index){
            swap(A[min_index],A[i]);
        }
    }
}

int main(){
    vector<int> A = {8,7,6,5,4,3,2,1};

    selection_sort(A);

    for(int i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}