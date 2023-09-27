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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, m;
int c[100];
int dp[100000];

int main(){
	cin >> n >> m;
	REP(i, m)cin >> c[i];
	fill(dp, dp + 100000, INF);
	dp[0] = 0, dp[1] = 1;
	REP(i, m){
		FOR(j, 2, 50001){
			if (j >= c[i]){
				dp[j] = min(dp[j], dp[j - c[i]] + 1);
			}
		}
	}
	cout << dp[n] << endl;
}