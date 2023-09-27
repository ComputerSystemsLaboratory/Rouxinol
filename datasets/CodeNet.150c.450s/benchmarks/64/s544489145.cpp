#include <iostream>

using namespace std;

int n, q, m;
int A[2000];
bool found;

void solve(int i, int s) {
    if (found) return;
    if (s == 0) {
        found = true;
        return;
    };
    if (i < n) {
        solve(i + 1, s - A[i]);
        solve(i + 1, s);
    }
}

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A[i] = a;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> m;
        //
        found = false;
        solve(0, m);
        if (found) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}