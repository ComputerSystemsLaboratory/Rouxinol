#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, M;
    while(cin >> N >> M && N){
        vector<int> h(N + 1), w(M + 1);
        h[0] = 0, w[0] = 0;
        rep(i, N) cin >> h[i + 1];
        rep(i, M) cin >> w[i + 1];
        rep(i, N) h[i + 1] += h[i];
        rep(i, M) w[i + 1] += w[i];
        vector<int> hs(h.back() + 1, 0), ws(w.back() + 1, 0);
        rep(i, N) REP(j, i + 1, N + 1)
          hs[h[j] - h[i]]++;
        rep(i, M) REP(j, i + 1, M + 1)
          ws[w[j] - w[i]]++;
        int ans = 0;
        rep(i, min(h.back(), w.back()) + 1)
          ans += hs[i] * ws[i];
        cout << ans << endl;
    }
    return 0;
}