#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define ll long long
#define INF 1e9 + 1
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

int n, A[100010];

int partition(int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

int main() {
    cin >> n;
    REP(i, n) cin >> A[i];
    int q = partition(0, n - 1);
    REP(i, n) {
        if (i) cout << " ";
        if (i == q) cout << "[";
        cout << A[i];
        if (i == q) cout << "]";
    }
    cout << endl;
}
