#include <iostream>
#include <sstream>
#include <regex>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <iomanip>
#include  <cassert>

using namespace std;
using ll = long long int;
#define rep(i,n) for(int i = 0; i < n; i++)
#define FOR(i, a, b)  for(int i = (a); i < (b) ; i++)
#define pb push_back
#define SORT(v,n) sort(v, v+n)
#define ALL(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << '\n'
#define elif else if
#define int ll
//const int INF = 100100100;
const int INF = (1LL << 32);
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;


static const int NMAX = 105;
static const int WMAX = 10005;
static const int DIAGONAL = 1;
static const int TOP = 0;

struct Item {
	int value, weight;
};

int N, W;
Item items[NMAX + 1];
int C[NMAX + 1][WMAX + 1], G[NMAX + 1][WMAX + 1];


void compute(int& maxValue, vector<int>& selection) {
	rep(i, W + 1) {
		C[0][i] = 0;
		G[0][i] = DIAGONAL;
	}
	FOR(i, 1, N + 1) C[i][0] = 0;

	FOR(i, 1, N + 1) {
		FOR(w, 1, W + 1) {
			C[i][w] = C[i - 1][w];
			G[i][w] = TOP;
			if (items[i].weight > w) continue;
			if (items[i].value + C[i - 1][w - items[i].weight] > C[i - 1][w]) {
				C[i][w] = items[i].value + C[i - 1][w - items[i].weight];
				G[i][w] = DIAGONAL;
			}
		}
	}
	maxValue = C[N][W];
	selection.clear();
	for (int i = N, w = W; i >= 1; i--) {
		if (G[i][w] == DIAGONAL) {
			selection.pb(i);
			w -= items[i].weight;
		}
	}
	reverse(ALL(selection));
}

void input() {
	cin >> N >> W;
	FOR(i, 1, N + 1) cin >> items[i].value >> items[i].weight;
}

signed main() {
	ios::sync_with_stdio(false);
	int maxValue;
	vector<int> selection;
	input();
	compute(maxValue, selection);
	//for (auto i : selection) {
	//	cout << i << ' ';
	//}
	//cout << endl;
	cout << maxValue << endl;
	return 0;
}
