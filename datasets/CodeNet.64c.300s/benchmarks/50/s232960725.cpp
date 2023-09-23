#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[100];

void solve() {
    int cnt = 0;
    for (;;) {
        bool flag = false;
        for (int i = N - 1; i >= 1; i--) {
            if (A[i] < A[i - 1]) {
                swap(A[i], A[i - 1]);
                cnt++;
                flag = true;
            }
        }
        if (!flag) { break; }
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