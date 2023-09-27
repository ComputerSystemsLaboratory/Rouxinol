#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int partition(vector<int> &A, int p, int r) {
    int x = A.at(r);
    int i = p - 1;
    for (int j = p; j < r; ++j) {
        if (A.at(j) <= x) {
            ++i;
            swap(A.at(i), A.at(j));
        }
    }
    swap(A.at(i + 1), A.at(r));
    return i + 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A.at(i);
    }
    int q = partition(A, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        if (i == q) cout << '[';
        cout << A.at(i);
        if (i == q) cout << ']';
    }
    cout << endl;

    return 0;
}
