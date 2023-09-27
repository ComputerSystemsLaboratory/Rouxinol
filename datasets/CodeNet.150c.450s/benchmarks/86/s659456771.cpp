#include <bits/stdc++.h>
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define rep(i,n) for(int i=0; i<(n); i++)
#define per(i,n) for(int i=(n)-1; i>=0; i--)
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
		int n, m, p; cin >> n >> m >> p;
		if (n==0 && m==0 && p==0) break;

		float total = 0.0;
		int bet = 0;
		FOR(i, 1, n+1) {
			int x; cin >> x;
			total += x;
			if (i==m) bet = x;
		}
		// print(total, p, bet);
		total *= 100;
		total = total * (100-p) / 100.0;
		if (bet) cout << floor(total / bet) << endl;
		else cout << 0 << endl;
	}
}
