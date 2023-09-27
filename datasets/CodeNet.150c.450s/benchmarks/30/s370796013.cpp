#include <iostream>
#include <algorithm>
using namespace std;
#include <cmath>

void trace(int A[], int n){
    for (int i = 0; i < n-1; i++) cout << A[i] << " ";
    cout << A[n-1] << "\n";
}

int main() {
    int N, temp, count = 0, minj;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++){
        minj = i;
        for (int j = i; j < N; j++){
            if (A[j] < A[minj]){
                minj = j;
            }
        }
        temp = A[i];
        A[i] = A[minj];
        A[minj] = temp;
        if (i != minj) count++;
    }

    trace(A,N);
    cout << count << endl;

    return 0;
}