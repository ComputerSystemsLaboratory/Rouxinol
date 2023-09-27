#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define dbg(x) cerr << #x << ": " << x << endl;
#define dbg2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define dbg3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define dbgB(value, size) cerr<<#value<<": "<<bitset<size>(value) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

template<typename T>
void print1(T begin, T end) {
	while (begin != end) {
		cerr << (*begin) << " ";
		*begin++;
	}
	cerr << endl;
}

template<typename T>
void print2(T Array, int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cerr << " " << Array[i][j];
		}
		cerr << endl;
	}
}

void print() { std::cerr << endl; }
template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
	std::cerr << head << " ";
	print(std::forward<Tail>(tail)...);
}

template<class T>
void Add(T &a, const T &b, const T &mod=1000000007) {
	int val = ((a % mod) + (b % mod)) % mod;
	if (val < 0) { val += mod; }
	a = val;
}

template <typename X, typename T> auto vectors(X x, T a) { return vector<T>(x, a); }
template <typename X, typename Y, typename Z, typename... Zs> auto vectors(X x, Y y, Z z, Zs... zs) { auto cont = vectors(y, z, zs...); return vector<decltype(cont)>(x, cont); }

// ------------------------------------------------------------------------------------------

int H;
int W = 5;
int B[11][6];
int C[11][6];
int used = -1;

// 横１行を計算する
int calc(int h, vector<int> &v) {
	int ret = 0;

	for (int k = 1; k <= 9; k++) {
		for (int len = 5; len >= 3; len--) {
			deque<int> que;
			int start = 0;
			for (int i = 0; i < W; i++) {
				que.push_back(v[i]);
				if (que.size() > len) {
					start++;
					que.pop_front();
				}
				// dbg3(k, len, count(que.begin(), que.end(), k))
				// dbg2(k, len)
				// print1(all(que));
				// line()
				if (count(que.begin(), que.end(), k) == len) {
					// dbg2(start, i)
					for (int j = start; j <= i; j++) {
						B[h][j] = used;
						used--;
					}
					/*
					for (int u = h; u >= 1; u--) {
						for (int j = start; j <= i; j++) {
							C[u][j] = B[u-1][j];
						}
					}
					for (int j = start; j <= i; j++) {
						C[0][j] = used;
						used--;
					}
					*/
					// used--;
					return len * k;
				}
			}
		}
	}

	return ret;
}

// なくなった分を埋める
void fall() {
	set<pair<int,int>> usedSet;
	for (int wi = 0; wi < W; wi++) {
		int HI = H - 1;
		for (int hi = H-1; hi >= 0; hi--) {
			if (B[hi][wi] > 0) {
				C[HI][wi] = B[hi][wi];
				usedSet.insert({HI, wi});
				HI--;
			}
		}
		// int hi = H - 1;
	}
	for (int hi = 0; hi < H; hi++) {
		for (int wi = 0; wi < W; wi++) {
			if (!usedSet.count({hi, wi})) {
				C[hi][wi] = used;
				used--;
			}
		}
	}
	for (int hi = 0; hi < H; hi++) {
		for (int wi = 0; wi < W; wi++) {
			B[hi][wi] = C[hi][wi];
		}
	}
}

int solve() {
	int ret = 0;

	// 初期化
	// rep (i, H) {
	// 	rep (j, W) {
	// 		C[i][j] = B[i][j];
	// 	}
	// }

	while (1) {
		bool exist = false;

		rep (i, H) {
			vector<int> v;
			rep (j, W) {
				v.push_back(B[i][j]);
			}
			int result = calc(i, v);
			// dbg(result)
			ret += result;
			if (result > 0) {
				exist = true;
			}
		}

		// line()
		fall();
		// print2(B, H, W);
		// dbg(ret)
		// ビーズを落とす

		if (!exist) break;
	}

	return ret;
}

signed main() {
	while (1) {
		cin >> H;
		if (H == 0) break;
		rep (i, H) {
			rep (j, 5) {
				cin >> B[i][j];
			}
		}
		cout << solve() << endl;
	}

	return 0;
}
