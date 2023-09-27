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
const int INFTY = (1 << 21); // 2097152
// const ll INFTY = (1LL << 60);

int N, M;
int C[20];
int dp[50001][21];

int main() {
	cin >> N >> M;
	rep(i, M) cin >> C[i];

	rep(i, N+1) dp[i][0] = INFTY;
	dp[0][0] = 0;

	rep(m, M){
		int c = C[m];
		int mm = m+1;
		rep(i, N+1){
			if(i < c) dp[i][mm] = dp[i][mm-1];
			else{ dp[i][mm] = min(dp[i][mm-1], dp[i-c][mm]+1); }
		}
	}

	cout << dp[N][M] << endl;
}