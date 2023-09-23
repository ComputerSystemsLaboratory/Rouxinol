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

void bubbleSort(int A[], int N) {
    int flag = 1;
    int cnt = 0;
    while (flag) {
        flag = 0;
        for (int j = N - 1; j > 0; j--) {
            if (A[j] < A[j - 1]) {
                swap(A[j], A[j - 1]);
                flag = 1;
                cnt++;
            }
        }
    }
    trace(A, N);
    cout << cnt << endl;
}

int main() {
    cin >> N;
    REP(i, N) cin >> A[i];
    bubbleSort(A, N);
}
