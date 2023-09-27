#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 1e9 + 7;
using pii = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
const int mod = 1e9 + 7;
ll power(ll a,ll b){return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;}

int main() {
    int x, y, s;
    while (cin >> x >> y >> s) {
        if (x == 0 && y == 0 && s == 0) break;
        int mmax = 0;
        rrep(pa, 1, s) { //original a price
            rrep(pb, 1, s) {
                if (pa * (100 + x) / 100 + pb * (100 + x) / 100 != s) continue;
                int sum = pa * (100 + y) / 100 + pb * (100 + y) / 100;
                chmax(mmax, sum);
            }
        }
        cout << mmax << endl;
    }
}

