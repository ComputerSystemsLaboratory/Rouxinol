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

int a, b, n, x, y;
set<P> se;
int dp[100][100];

int main(){
	while (cin >> a >> b&&a + b){
		cin >> n;
		REP(i, n){
			cin >> x >> y;
			x--; y--;
			se.insert(P(y, x));
		}
		dp[0][0] = 1;
		REP(i, b){
			REP(j, a){
				if (i + j == 0)continue;
				if (i == 0)dp[i][j] = dp[i][j - 1];
				else if (j == 0)dp[i][j] = dp[i - 1][j];
				else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				if (se.find(P(i, j)) != se.end()){
					dp[i][j] = 0;
				}
				//cout << dp[i][j] << " ";
			}
		}
		cout << dp[b - 1][a - 1] << endl;
		se.clear();
		REP(i, b)REP(j, a)dp[i][j]=0;
	}
}