#include <bits/stdc++.h>
using namespace std;

#define first  fs
#define second se
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; ++i)

using pii = pair<int, int>;
using vi = vector<int>;
using lint = long long;

const int inf = 1001001001;
const lint linf = 1001001001001001001ll;
const int mod = 1e9 + 7;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template<typename T> inline bool chmin(T &a, T b) { if (a > b) { a = b; } return a > b; }
template<typename T> inline bool chmax(T &a, T b) { if (a < b) { a = b; } return a < b; }
template<typename T> inline void print(const T &x, char s = '\n') { cout << x << s; }
template<typename T> inline void print(const vector<T> &v, string s = " ") 
{ rep(i, v.size()) cout << v[i] << (i + 1 == v.size() ? "\n" : s); }
inline bool inside(int y, int x, int H, int W) { return 0 <= y && y < H && 0 <= x && x < W; }
inline lint in() { lint x; std::cin>>x; return x; }

int main() {
	int n, r;
	while (cin >> n >> r, n) {
		vi v;
		rep(i, n) v.push_back(n - i);

		rep(_, r) {
			int p = in(), c = in();
			vi beet, ei;
			for (int i = p - 1; i < p + c - 1; ++i) beet.push_back(v[i]);
			rep(i, p - 1) beet.push_back(v[i]);

			rep(i, beet.size()) v[i] = beet[i];
		}

		print(v[0]);
	}
}