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

int v[110], w[110], W, N;
int dp[10010];

int main(){
	cin >> N >> W;
	REP(i, N){
		cin >> v[i] >> w[i];
	}

	for (int i = 0; i < N; i++){
		for (int j = W; j >= w[i]; j--){
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	cout << dp[W] << endl;
}