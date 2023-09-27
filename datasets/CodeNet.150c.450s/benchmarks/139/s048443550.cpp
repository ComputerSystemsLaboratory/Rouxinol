#include <bits/stdc++.h>
using namespace std;

#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) for (int i = 0; i < n; ++i)
#define dump(a) cerr << #a << " = " << (a) << "(L:" << __LINE__ << ")" << endl

const string YES = "Yes";

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> B) {
    vector<vector<int> > E(N);
    rep(i, M) {
        A[i]--;
        B[i]--;
        E[A[i]].push_back(B[i]);
        E[B[i]].push_back(A[i]);
    }

    vector<int> cost(N, -1);
    vector<int> from(N, -1);
    queue<int> Q;
    cost[0] = 0;
    from[0] = 0;
    Q.push(0);
    while (!Q.empty()) {
        int p = Q.front();
        Q.pop();
        for (int to : E[p]) {
            if (cost[to] == -1) {
                cost[to] = cost[p] + 1;
                from[to] = p;
                Q.emplace(to);
            }
        }
    }

    rep(i, N) {
        if (cost[i] == -1) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
    rep(i, N-1) {
        cout << from[i+1] + 1 << endl;
    }

}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
