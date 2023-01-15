#include <bits/stdc++.h>

using namespace std;

int missingK(int a[], int k, int n){
    int difference = 0, ans = 0, count = k;
    bool flag = 0;
    if (a[0] != 1) {
        difference = a[0] - 1;
        if (difference >= count)
            return count;
        count -= difference;
    }
    for (int i = 0; i < n - 1; i++) {
        difference = 0;
        if ((a[i] + 1) != a[i + 1]) {
            difference += (a[i + 1] - a[i]) - 1;
            if (difference >= count) {
                ans = a[i] + count;
                flag = 1;
                break;
            }
            else
                count -= difference;
        }
    }
    if (flag)
        return ans;
    else
        return -1;
}


int main(){
    int a[] = { 2, 8, 9, 11, 19 };
    int k = 11;
    int n = sizeof(a) / sizeof(a[0]);
    int missing = missingK(a, k, n);
    cout << missing << endl;
    return 0;
}
