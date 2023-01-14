#include <bits/stdc++.h>

#define N 9

using namespace std;

int main(){
    int A[N] = {3,26,34,63,68,57,63,1,32};
    int peaky,count=0;

    for(int i=0;i<N;i++){
        switch(i){
            case 0:
                if(A[0]>A[N-1]){
                    if(A[0]>A[1]){
                        peaky=0;
                        count++;
                    }
                }
                break;
            case N-1:
                if(A[0]<A[N-1]){
                    if(A[N-1]>A[N-2]){
                        peaky=N-1;
                        count++;
                    }
                }
                break;
            default:
                if(A[i]>A[i-1]){
                    if(A[i]>A[i+1]){
                        peaky=i;
                        count++;
                    }
                }
                break;
        }
    }

    cout << "There are " << count << " peaks and one of them is at " << peaky << "th index." << endl;
}