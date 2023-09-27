#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
int n, q, A[20], m;
/* main */
int solve(int i, int m){
    if (m == 0){
        return 1;
    }else if (i >= n) return 0;
    int res = solve(i+1, m) || solve(i+1, m - A[i]);
    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    cin >> q;
    for (int j = 0; j < q; ++j) {
        cin >> m;
        if (solve(0, m)) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
