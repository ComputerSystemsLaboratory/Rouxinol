#include <iostream>

using namespace std;

const int MAX_N = 20;
const int MAX_Q = 2000;

int n, A[MAX_N];

int solve(int i, int m) {
    if (m == 0) {
        return 1;
    }
    else if (i >= n) {
        return 0;
    }
    int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main() {
    int q, M, i;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> M;
        if (solve(0, M)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}