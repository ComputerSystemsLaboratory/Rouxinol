#include<iostream>

using namespace std;

int n, A[20];

int solve (int i, int m) {

    int res;

    if (m == 0) {

        return 1;

    }

    if (i >= n) {

        return 0;

    }

    res = solve (i + 1, m) || solve (i + 1, m - A[i]);

    return res;

}

int main () {

    int q, m[200], i;

    cin >> n;
    for (i = 0; i < n; i++) {

        cin >> A[i];

    }

    cin >> q;
    for (i = 0; i < q; i++) {

        cin >> m[i];

    }

    for (i = 0; i < q; i++) {

        if (solve (0, m[i])) {

            cout << "yes" << endl;

        } else {

            cout << "no" << endl;

        }

    }

    return 0;

}