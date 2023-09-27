#include <iostream>
using namespace std;

int n, A[2000], q;

int solve(int i, int sum) {
    if (sum == 0) return 1;
    if (sum < 0) return 0;
    if (i >= n) return 0;
#ifdef DEBUG
    cout << "i:" << i << " sum:" << sum << endl;
#endif
    int res = solve(i + 1, sum) || solve(i + 1, sum - A[i]);
    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;
#ifdef DEBUG
        cout << m << endl;
#endif
        if (solve(0, m)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}