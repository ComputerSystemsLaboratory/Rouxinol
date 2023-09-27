#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define INF 1000000000000000000
typedef pair<ll, ll> pll;

int partition(vector<int> &A, int p, int r) {
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) { cin >> A[i]; }

    int a = partition(A, 0, N - 1);
    for (int i = 0; i < a; i++) {
        cout << A[i] << " ";
    }
    cout << "[" << A[a] << "]"
         << " ";
    for (int i = a + 1; i < N - 1; i++) {
        cout << A[i] << " ";
    }
    cout << A[N - 1] << endl;
}
