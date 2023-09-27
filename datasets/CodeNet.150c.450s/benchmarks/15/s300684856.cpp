#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, A[10001], q, T[501], key;
    int c = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }

    for (int i = 0; i < q; i++) {
        key = T[i];
        A[n] = key;
        int j = 0;
        while (A[j] != key) {
            j++;
        }
        if (j != n) {
            c++;
        }
    }
    cout << c << endl;
}

