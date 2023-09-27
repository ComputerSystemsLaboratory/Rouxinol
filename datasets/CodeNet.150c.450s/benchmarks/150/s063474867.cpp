#include<iostream>
using namespace std;

int A[2000005], B[2000005], C[10005];

void CountingSort(int n) {
    int k = 10000;
    for (int i = 0; i <= k; i++) C[i] = 0;

    for (int j = 0; j < n; j++) C[A[j]]++;

    for (int i = 1; i <= k; i++) C[i] += C[i - 1];

    for (int j = n - 1; j >= 0; j--) {
        B[C[A[j]] - 1] = A[j];
        C[A[j]]--;
    } 
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    CountingSort(n);
    for (int i = 0; i < n; i++) cout << B[i] << (i != n - 1 ? " " : "\n");
}
