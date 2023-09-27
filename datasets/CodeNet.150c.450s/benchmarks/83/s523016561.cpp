#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << "\n"
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
constexpr int NMAX = 105;
constexpr int WMAX = 10005;
enum Color { TOP = 0, DIAGONAL};
struct Item { int value, weight; };
int N, W;
vector<Item> items(NMAX + 1);
vv(int, C, NMAX + 1, WMAX + 1, 0);
vv(int, G, NMAX + 1, WMAX + 1, DIAGONAL);
void compute(int &maxValue, vi &selection) {
	rep(i, 1, N + 1) {
		rep(w, 1, W + 1) {
			C[i][w] = C[i -1][w];
			G[i][w] = TOP;
			if(items[i].weight > w) continue;
			if(items[i].value + C[i - 1][w - items[i].weight] > C[i - 1][w]) {
				C[i][w] = items[i].value + C[i - 1][w - items[i].weight];
				G[i][w] = DIAGONAL;
			}
		}
	}
	maxValue = C[N][W];
	selection.clear();
	int w = W;
	rrep(i, N, 0) {
		if(G[i][w] == DIAGONAL) {
			selection.eb(i);
			w -= items[i].weight;
		}
	}
	reverse(all(selection));
}
int main() {
	int maxValue;
	vi selection;
	cin >> N >> W;
	rep(i, 1, N + 1) {
		cin >> items[i].value >> items[i].weight;
	}
	compute(maxValue, selection);
	P(maxValue);
	return 0;
}