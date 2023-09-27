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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 10e15+9
#define MOD 1000000007
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, s;
int ans = 0;

void dfs(long long i, long long sum, long long num){
	if (i == n&&sum == s){
		ans++;
		return;
	}

	for (int j = num; j <= 9; j++){
		dfs(i + 1, sum + j, j + 1);
	}
	return;
}

int main(){
	while (cin >> n >> s){
		if (n + s == 0)break;
		ans = 0;
		dfs(0, 0, 0);
		cout << ans << endl;
	}
}