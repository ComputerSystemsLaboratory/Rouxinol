#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)

int main() {
    int n;
    cin >> n;
    int A[5][4][11] = {};

    REP(i, n) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        A[b][f][r] += v;
    }

    FOR(b, 1, 5) {
        if (b > 1)cout << "####################" << endl;
        FOR(f, 1, 4) {
            FOR(r, 1, 11) {
                cout << " " << A[b][f][r];
            }
            cout << endl;
        }
    }

}