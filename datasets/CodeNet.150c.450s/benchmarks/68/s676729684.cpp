#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define debug(var) do{cout << #var << " : "; print(var); } while(0)
using namespace std;
typedef long long ll;
void print() { cout << endl; }
template <class Head, class... Tail> void print(Head&& head, Tail&&... tail) { cout << head; if (sizeof...(tail) != 0) cout << " "; print(forward<Tail>(tail)...); }
template <class T> void print(vector<T> &vec) { for (auto& a : vec) { cout << a; if (&a != &vec.back()) cout << " "; } cout << endl; }
template <class T> void print(vector<vector<T>> &df) { for (auto& vec : df) { print(vec); } }
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		int n; cin >> n;
		if (!n) break;

		vector<int> vec(n);
		rep(i, n) cin >> vec[i];
		sort(all(vec));

		int ans = INF;
		rep(i, n-1) ans = min(ans, vec[i+1]-vec[i]);

		cout << ans << endl;
	}
}
