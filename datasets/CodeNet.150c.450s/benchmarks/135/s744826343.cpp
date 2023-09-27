#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	while(cin >> n >> m, n, m){
		vector<int> h(n + 1), w(m + 1);
		h[0] = 0; w[0] = 0;
		rep(i, 1, n + 1) cin >> h[i];
		rep(i, 1, m + 1) cin >> w[i];
		rep(i, 1, n + 1) h[i] += h[i - 1];
		rep(i, 1, m + 1) w[i] += w[i - 1];
		vector<int> hh, ww;
		rep(i, 0, n + 1){
			rep(j, i + 1, n + 1){
				hh.push_back(h[j] - h[i]);
			}
		}
		rep(i, 0, m + 1){
			rep(j, i + 1, m + 1){
				ww.push_back(w[j] - w[i]);
			}
		}
		sort(all(hh));
		sort(all(ww));
		int ans = 0;
		rep(i, 0, hh.size()){
			ans += upper_bound(all(ww), hh[i]) - lower_bound(all(ww), hh[i]);
		}		
		cout << ans << endl;
	}
}
