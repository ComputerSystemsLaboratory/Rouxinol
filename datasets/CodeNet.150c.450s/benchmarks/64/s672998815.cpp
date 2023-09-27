#include <algorithm>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

int n, A[30];

int solve(int i, int m) {
    if (m == 0) return 1;
    if (i >= n) return 0;
    int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main() {
    int q, M, i;
    cin >> n;
    REP(i, n) cin >> A[i];
    cin >> q;
    REP(i, q) {
        cin >> M;
        if (solve(0, M))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
