#include <iostream>
using namespace std;

int a[2000];
int N;

bool solve(int t, int n) {
     if (t == 0) return true;
     else if (n == N) return false;
     else return solve(t - a[n], n + 1) || solve(t, n + 1);
}

int main() {
    int q; cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    cin >> q;
    while (q--) {
        int t; cin >> t;
        if (solve(t, 0)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}