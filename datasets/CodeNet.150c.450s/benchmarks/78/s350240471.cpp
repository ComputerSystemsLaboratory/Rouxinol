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

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = (1LL << 31) - 1;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100 * 3

int n;

vector<ll> table, table2;

ll dp[2][2][1001000];

int main() {
	for (int i = 1; i*(i + 1)*(i + 2) / 6 <= 1000000; i++) {
		table.push_back(i*(i + 1)*(i + 2) / 6);
		if ((i*(i + 1)*(i + 2) / 6) % 2 == 1)table2.push_back(i*(i + 1)*(i + 2) / 6);
	}
	//cout << table.size() << endl;
	REP(i, 2) {
		REP(j, 2) {
			REP(k, 1001000)dp[i][j][k] = INF;
		}
	}
	dp[0][0][0] = 0;
	dp[1][0][0] = 0;

	REP(i, table.size()) {
		int num = table[i];
		REP(j, 1000000) {
			if (j - num >= 0) {
				dp[0][(i + 1) % 2][j] = min(dp[0][(i + 1) % 2][j - num] + 1, dp[0][i % 2][j]);
			}
			else dp[0][(i + 1) % 2][j] = dp[0][i % 2][j];
		}
	}

	for (int i = 0; i < table2.size(); i++) {
		int num = table2[i];
		//cout << num << endl;
		REP(j, 1000000) {
			if (j - num >= 0) {
				dp[1][(i + 1) % 2][j] = min(dp[1][(i + 1) % 2][j - num] + 1, dp[1][i % 2][j]);
			}
			else dp[1][(i + 1) % 2][j] = dp[1][i % 2][j];
		}
	}
	
	while (cin >> n&&n) {
		cout << dp[0][table.size() % 2][n] << " "
			<< dp[1][table2.size() % 2][n] << endl;
	}
}