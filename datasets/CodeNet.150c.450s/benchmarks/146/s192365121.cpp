#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define Cout2(x, y) cout << (x) << " " << (y) << endl
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long LL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = 1e9;
const double pi = acos(-1.0);

typedef complex<double> CD;
double gosa = 0.0000001;

//平行判定
bool Check_para(CD p1, CD p2, CD q1, CD q2) {
	double a1 = arg(p1 - p2), a2 = arg(q1 - q2);
	return abs(a1 - a2) < gosa || abs(abs(a1 - a2) - pi) < gosa;
}

int main() {
	int n; cin >> n;
	rep(loop, n) {
		vector<double> xy(8); rep(i, 8)cin >> xy[i];
		CD a(xy[0], xy[1]), b(xy[2], xy[3]), c(xy[4], xy[5]), d(xy[6], xy[7]);
		puts(Check_para(a, b, c, d) ? "YES" : "NO");
	}
}
