#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;


void trace(int A[], int N)
{
    int i;
    for (i = 0; i < N; i++) {
        if(i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

int bubbleSort(int A[], int N){
    bool flag = 1;
    int cnt = 0;
    while (flag){
        flag = 0;
        for (int i=N-1; i >= 1; i--) {
            if (A[i] < A[i-1]) {
                swap(A[i], A[i-1]);
                cnt += 1;
                flag =  1;
            }
        }
    }
    trace(A, N);
    return cnt;
}

int main() {
    int n, num_sec[101]={}, cnt=0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> num_sec[i];
    cnt=bubbleSort(num_sec, n);
    cout << cnt << endl;
}


