#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef long long ll;

const int MAX_N = 1e5 + 1;

ll D[MAX_N], P[MAX_N];

void solve(int N, int M) {
    map<int, int> cnt;
    vector<int> exp_value(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i] >> P[i];
        cnt[P[i]] += D[i];
        exp_value[i] = P[i];
    }
    sort(exp_value.begin(), exp_value.end());
    exp_value.erase(unique(exp_value.begin(), exp_value.end()), exp_value.end());
    reverse(exp_value.begin(), exp_value.end());
    for (int i = 0; i < exp_value.size(); i++) {
        if (M >= cnt[exp_value[i]]) {
            M -= cnt[exp_value[i]];
            cnt[exp_value[i]] = 0;
        }
        else {
            cnt[exp_value[i]] -= M;
            M = 0;
        }
    }
    int ans = 0;
    for (auto i = cnt.begin(); i != cnt.end(); i++) {
        if (i->second == 0) continue;
        ans += i->first * i->second;
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, M;
    while (true) {
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        solve(N, M);
    }
    return 0;
}
