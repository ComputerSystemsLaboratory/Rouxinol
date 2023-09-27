#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define INF 1000000000000000000
typedef pair<ll, ll> pll;

struct p {
    char c;
    int n;
};

int partition(vector<p> &A, int p, int r) {
    int x = A[r].n;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].n <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void QuickSort(vector<p> &A, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<p> A(N);
    rep(i, N) {
        char a;
        int b;
        cin >> a >> b;
        A[i] = {a, b};
    }

    vector<p> AA = A;
    stable_sort(all(AA), [](p a, p b) { return a.n < b.n; });

    QuickSort(A, 0, N - 1);
    bool judge = 1;
    rep(i, N) {
        if (AA[i].c != A[i].c)
            judge = 0;
    }

    if (judge) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    rep(i, N) { cout << A[i].c << " " << A[i].n << endl; }
}

