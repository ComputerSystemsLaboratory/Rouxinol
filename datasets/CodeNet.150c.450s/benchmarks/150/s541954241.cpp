#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define INF 1000000000000000000
typedef pair<ll, ll> pll;

vector<int> C(10005);
void CountingSort(vector<int> A, vector<int> &B, int k) {
    for (int i = 0; i <= k; i++) {
        C[i] = 0;
    }
    for (int j = 0; j < A.size(); j++) {
        C[A[j]]++;
    }

    for (int i = 1; i <= k; i++) {
        C[i] = C[i] + C[i - 1];
    }

    for (int j = A.size() - 1; j > -1; j--) {
        B[C[A[j]] - 1] = A[j];
        C[A[j]]--;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) { cin >> A[i]; }

    int k = *max_element(all(A));
    CountingSort(A, B, k);
    rep(i, N - 1) { cout << B[i] << " "; }
    cout << B[N - 1] << endl;
}
