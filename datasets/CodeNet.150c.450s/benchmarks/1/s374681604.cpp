#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;

int N_MAX = 100000;
int N;
vector<int> A(N_MAX);
vector<int> dp(N_MAX, INF);

int main() {
    cin >> N;
    REP(i,N) {
        cin >> A[i];
        auto itr = lower_bound(ALL(dp), A[i]);
        *itr = A[i];
    }

    auto len = lower_bound(ALL(dp), INF);
    int ans = len - dp.begin();

    cout << ans << endl;
    return 0;
}
