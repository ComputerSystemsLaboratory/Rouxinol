#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (long long i = 0; i < N; i++)
using ll = long long;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, std::vector<long long> A) {
    for (ll i = K; i < N; i++) {
        if (A[i - K] < A[i]) {
            cout << YES << endl;
        } else {
            cout << NO << endl;
        }
    }
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    solve(N, K, std::move(A));
    return 0;
}
