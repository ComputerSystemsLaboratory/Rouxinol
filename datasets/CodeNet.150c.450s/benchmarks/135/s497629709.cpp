#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i ++)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PL;
typedef pair<int,int> P;
const int INF = 1e9;
const ll MOD = 1e9 + 7;
const vector<int> dy = {-1,0,1,0};
const vector<int> dx = {0,1,0,-1};

void solve(int n,int m) {
    vector<int> H(n);
    vector<int> W(m);
    for (int i = 0; i < n; i++) cin >> H[i];
    for (int i = 0; i < m; i++) cin >> W[i];
    vector<int> H_dif(1500000,0);
    vector<int> W_dif(1500000,0);
    for (int i = 0;i < n; i++) {
        int high = 0;
        for (int j = i;j < n;j ++) {
            high += H[j];
            H_dif[high] ++;
        }
    }
    for (int i = 0; i < m; i++) {
        int width = 0;
        for (int j = i; j< m; j++) {
            width += W[j];
            W_dif[width] ++;
        }
    }

    int ans = 0;
    for (int i = 0; i< 1500000; i++) {
        ans += H_dif[i]*W_dif[i];
    }
    cout << ans << endl;
}

int main() {
    while (1) {
        int n,m; cin >> n >> m;
        if (n == 0) return 0;
        solve(n,m);
    }
}
