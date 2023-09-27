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

int search(int A[], int n, int key) {
    int i = 0;
    A[n] = key;
    while (A[i] != key) i++;
    return i != n;
}

int main() {
    int n, q;
    int S[10010], T[510];
    cin >> n;
    REP(i, n) cin >> S[i];
    cin >> q;
    REP(i, q) cin >> T[i];
    int cnt = 0;

    REP(i, q) {
        if (search(S, n, T[i])) cnt++;
    }
    cout << cnt << endl;
}
