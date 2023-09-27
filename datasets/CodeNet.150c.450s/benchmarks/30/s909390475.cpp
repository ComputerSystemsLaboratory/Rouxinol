#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[100];

void solve() {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        swap(A[i], A[minj]);
        if (i != minj) { cnt++; }
    }

    cout << A[0];
    for (int i = 1; i < N; i++) {
        cout << " " << A[i];
    }
    cout << endl;

    cout << cnt << endl;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    solve();
    return 0;
}