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

int selectionSort(int A[], int N){
    int minj, cnt = 0;
    for (int i = 0; i < N; i++) {
        minj = i;
        for (int j = i; j < N; j++){
          if (A[j] < A[minj]) minj = j;
        }
        if (i != minj) {
            swap(A[i], A[minj]);
            cnt += 1;
        }
    }
    trace(A, N);
    return cnt;
}


int main() {
    int n, num_sec[101]={}, cnt=0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> num_sec[i];
    cnt=selectionSort(num_sec, n);
    cout << cnt << endl;
}
