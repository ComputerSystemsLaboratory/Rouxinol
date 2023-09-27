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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 10e9+9
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, h, m, s;
int a[100000];

int main(){
	while (cin >> n&&n){
		fill(a, a + 100000, 0);
		REP(i, n){
			scanf("%d:%d:%d", &h, &m, &s);
			a[h * 3600 + m * 60 + s]++;
			scanf("%d:%d:%d", &h, &m, &s);
			a[h * 3600 + m * 60 + s]--;
		}
		FOR(i, 1, 100000){
			a[i] += a[i - 1];
		}
		int ans = 1;
		REP(i, 100000){
			ans = max(ans, a[i]);
		}
		cout << ans << endl;
	}
}