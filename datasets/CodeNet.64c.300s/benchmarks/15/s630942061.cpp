#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

int N, A[110];

void trace(int A[], int N) {
    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

void selectionSort(int A[], int N) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        if (i != minj) {
            swap(A[i], A[minj]);
            cnt++;
        }
    }
    trace(A, N);
    cout << cnt << endl;
}

int main() {
    cin >> N;
    REP(i, N) cin >> A[i];
    selectionSort(A, N);
}
