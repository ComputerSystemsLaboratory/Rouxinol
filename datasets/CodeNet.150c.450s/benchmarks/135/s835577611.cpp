#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main() {
	int n, m;
	while (cin >> n >> m, n&&m) {
		vector<ll>h, w;
		vector<ll>sh, sw;
		for (int i = 0; i < n; i++) {
			int k; cin >> k;
			for (int j = 0; j < sh.size(); j++) {
				sh[j] += k;
				h.push_back(sh[j]);
			}
			h.push_back(k);
			sh.push_back(k);
		}
		sort(h.begin(), h.end());
		for (int i = 0; i < m; i++) {
			int k; cin >> k;
			for (int j = 0; j < sw.size(); j++) {
				sw[j] += k;
				w.push_back(sw[j]);
			}
			w.push_back(k);
			sw.push_back(k);
		}
		sort(w.begin(), w.end());
		long long ans = 0;
		for (int i = 0; i < h.size(); i++) 
			ans += upper_bound(w.begin(), w.end(), h[i]) - lower_bound(w.begin(), w.end(), h[i]);
		cout << ans << endl;
	}
}