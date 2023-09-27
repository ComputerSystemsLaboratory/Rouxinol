#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
using ll = long long;

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define endl "\n"
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double PI = acos(-1);
constexpr int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//-------------------------------------

bool solve() {
    int n, m, p;
    cin >> n >> m >> p;
    m--;
    if(n == 0) {
        return 0;
    }
    vector<int> x(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int sum = accumulate(ALL(x), 0);
    if(x[m] == 0) {
        cout << 0 << endl;
    } else {
        cout << ((100 - p) * sum / x[m]) << endl;
    }
    return 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(1) {
        if(!solve()) {
            break;
        }
    }
}
