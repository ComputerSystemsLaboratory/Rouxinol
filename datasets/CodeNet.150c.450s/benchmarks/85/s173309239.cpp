#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;

int N;
int C[101];
int dp[100][100];
const int INFTY = (1 << 30);

int main() {
	cin >> N;
	rep(i, N) cin >> C[i] >> C[i+1];

	rep(y, N) rep(x , N) dp[y][x] = INFTY;

	rep(y, N) dp[y][y] = 0;

	for(int d = 1; d < N; d++)
		for(int y = 0; d + y < N; y++){
			for (int dd = 0; dd < d; dd++) {
				int m1_s = y;
				int m1_e = y+dd;
				int m2_s = y+dd+1;
				int m2_e = y+d;

				int cl = C[m1_s] * C[m2_s] * C[m2_e + 1];
				dp[m1_s][m2_e] = min(dp[m1_s][m2_e], dp[m1_s][m1_e] + dp[m2_s][m2_e] + cl);
			}
		}
	cout << dp[0][N-1] << endl;

}