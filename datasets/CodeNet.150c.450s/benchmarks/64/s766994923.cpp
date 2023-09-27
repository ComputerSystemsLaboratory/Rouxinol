#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

int n, q;
int A[100100], m;

bool solve(int i, int m) {
	if (m == 0)return true;
	if (i >= n)return false;
	bool res = solve(i + 1, m) || solve(i + 1, m - A[i]);
	return res;
}

int main() {
	cin >> n;
	rep(i, n)cin >> A[i];
	cin >> q;
	rep(i, q) {
		int m;
		cin >> m;
		if (solve(0, m))cout << "yes" << endl;
		else cout << "no" << endl;
	}
}