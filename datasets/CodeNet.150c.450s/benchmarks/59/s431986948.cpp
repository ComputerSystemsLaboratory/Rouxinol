#include <iostream>

using namespace std;

int N;
int A[100];

void solve() {
    cout << A[0];
    for (int j = 1; j < N; j++) {
        cout << ' ' << A[j];
    }
    cout << endl;

    for (int i = 1; i < N; i++) {
        int j;
        int v = A[i];
        for (j = i - 1; j >= 0 && A[j] > v; j--) {
            A[j + 1] = A[j];
        }
        A[j + 1] = v;

        cout << A[0];
        for (int j = 1; j < N; j++) {
            cout << ' ' << A[j];
        }
        cout << endl;
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) { cin >> A[i]; }
    solve();
    return 0;
}