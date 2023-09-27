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
int A[100100];
bool dp[5000];

//bool solve(int i, int m) {
//	if (i >= n || m < 0)return false;
//	if (m == 0 || dp[m])return dp[m] = true;
//	dp[m] |= solve(i + 1, m);
//	dp[m - A[i]] |= solve(i + 1, m - A[i]);
//	return dp[m] || dp[m - A[i]];
//}

void solve(int i, int sum) {
	dp[sum] = true;
	if (i == n)return;
	solve(i + 1, sum);
	solve(i + 1, sum + A[i]);
}

int main() {
	cin >> n;
	rep(i, n)cin >> A[i];
	solve(0, 0);
	cin >> q;
	rep(i, q) {
		int m;
		cin >> m;
		if (dp[m])cout << "yes" << endl;
		else cout << "no" << endl;
	}
}