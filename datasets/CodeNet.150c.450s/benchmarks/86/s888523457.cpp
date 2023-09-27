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
#define MAX_N 20000
#define MAX_M 16

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, m;
double p;
int x[101];

int main(){
	while (cin >> n >> m >> p&&n + m + p){
		double sum = 0;
		REP(i, n){
			cin >> x[i];
			sum += x[i];
		}
		sum *= (100 - p);
		int ans = 0;
		if (x[m - 1] != 0) ans = sum / x[m - 1];
		cout << ans << endl;
	}
}