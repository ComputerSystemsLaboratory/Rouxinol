//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

int main() {
    while(true) {
        int n;
        cin >> n;
        if(!n) break;
        vi a(n), b(n);
        rep(i, n) {
            int g, h, j, l, p, o;
            scanf("%d:%d:%d %d:%d:%d", &g, &h, &j, &l, &p, &o);
            a[i] = g*3600 + h*60 + j;
            b[i] = l*3600 + p*60 + o;
        }

        vi ch(24*3600+1);
        rep(i, n) {
            ch[a[i]]++;
            ch[b[i]]--;
        }

        int ans = 0;
        int now = 0;
        rep(i, 24*3600+1) {
            now += ch[i];
            ans = max(ans, now);
        }

        cout << ans << '\n';
    }
}
